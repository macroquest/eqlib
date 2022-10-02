Param (
    [Parameter(
        Mandatory = $true,
        ValueFromPipeLine = $true,
        ValueFromPipelineByPropertyName = $true
    )]
    [string]$eqlibDir
)

if (-Not (Test-Path $eqlibDir -PathType Container)) {
    Write-Error "Path does not exist: $eqlibDir"
    exit 1
}

$functionDefs = "FunctionDefs.cpp", "ExceptionsDisabled.cpp"

$functionDefs | ForEach-Object {
    if (-Not (Test-Path $eqlibDir/$_ -PathType Leaf)) {
        Write-Error "File does not exist: $eqlibDir/$_"
        exit 1
    }
}

$errorCount = 0
$lineNum = 0

$functionDefs | ForEach-Object {
    $filename = $_
    $prevErrorCount = $errorCount
    $lineNum = 0
    Get-Content $eqlibDir/$_ | ForEach-Object {
        $line = $_.Trim()
        $lineNum = $lineNum + 1

        # All files
        if ([string]::IsNullOrWhiteSpace($line)) {
            # A blank line
        }
        elseif ($line.StartsWith("//")) {
            # A comment
        }
        elseif ($line.StartsWith("/*")) {
            # A block comment
        }
        elseif ($line.StartsWith("*")) {
            # Probably in a block comment
        }
        elseif ($line.StartsWith("#include")) {
            # Headers
        }
        elseif ($line -eq "namespace eqlib {" -Or $line -eq "}" -Or $line.StartsWith("} //")) {
            # Namespace
        }
        elseif ($line.StartsWith("#if") -Or $line.StartsWith("#endif")) {
            # ifdefs
        }
        elseif ($line.StartsWith("FUNCTION_AT_ADDRESS") -Or $line.StartsWith("FUNCTION_AT_VIRTUAL_ADDRESS")) {
            # Function Defs
        }
        # ExceptionsDisabled
        elseif ($line -like "#if *!defined(_M_AMD64)") {
            # Expected if !defined
        }
        elseif ($line -eq "#pragma warning(disable : 4530)") {
            # Disabled warnings in this file
        }
        else {
            if ($errorCount -eq $prevErrorCount) {
                Write-Host "$functionDefs should only include FUNCTION_AT_<VIRTUAL_>ADDRESS calls and surrounding items."
            }
            $errorCount = $errorCount + 1
            Write-Host "$filename :: Issue on Line $lineNum :: $line"
        }
    }
}

$prevErrorCount = $errorCount

$files = Get-ChildItem $eqlibDir -Filter "*.cpp"
if (($files | Measure-Object).Count -gt 0)
{
    $files | ForEach-Object {
        $lineNum = 0
        $fileName = $_.Name
        if (-Not ($functionDefs -contains $fileName)) {
            Get-Content $_.FullName | ForEach-Object {
                $lineNum = $lineNum + 1
                $line = $_.Trim()
                if (($line.StartsWith("FUNCTION_AT_ADDRESS") -Or $line.StartsWith("FUNCTION_AT_VIRTUAL_ADDRESS")) -And -Not ($line -like "*Exception to Separate Function Addresses*")) {
                    if ($prevErrorCount -eq $errorCount) {
                        Write-Host "FUNCTION_AT_<VIRTUAL_>ADDRESS call found outside of $functionDefs"
                    }
                    $errorCount = $errorCount + 1
                    Write-Host "$filename :: Issue on Line $lineNum :: $line"
                }
            }
        }
    }
}

if ($errorCount -gt 0)
{
    exit 1
}