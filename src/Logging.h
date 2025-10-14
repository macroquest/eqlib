/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include <spdlog/spdlog.h>

namespace eqlib {

extern std::shared_ptr<spdlog::logger> logger;

} // namespace eqlib

#define LOG_TRACE(...) SPDLOG_LOGGER_TRACE(eqlib::logger, __VA_ARGS__)
#define LOG_DEBUG(...) SPDLOG_LOGGER_DEBUG(eqlib::logger, __VA_ARGS__)
#define LOG_INFO(...) SPDLOG_LOGGER_INFO(eqlib::logger, __VA_ARGS__)
#define LOG_WARN(...) SPDLOG_LOGGER_WARN(eqlib::logger, __VA_ARGS__)
#define LOG_ERROR(...) SPDLOG_LOGGER_ERROR(eqlib::logger, __VA_ARGS__)
#define LOG_CRITICAL(...) SPDLOG_LOGGER_CRITICAL(eqlib::logger, __VA_ARGS__)
