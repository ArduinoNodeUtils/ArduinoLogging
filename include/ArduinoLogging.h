// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#ifndef ARDUINOLOGGING_LOGGING_H
#define ARDUINOLOGGING_LOGGING_H

#include "Logger.h"


#ifndef NDEBUG

#include "SerialPrinter.h"
static SerialPrinter DEFAULT_PRINTER = SerialPrinter();
static Logger DEFAULT_LOGGER = Logger(DEFAULT_PRINTER);

#define LOG_DEBUG_DELAY(L, T, D, MSG, ...) if((millis() - (T)) > D) { \
                                                L.dbg_print("DEBUG: " MSG " [%s:%d]", ##__VA_ARGS__, __FILE__, __LINE__); T = millis(); }

#define LOG_DEBUG(L, MSG, ...) L.dbg_print("DEBUG: " MSG "[%s:%d]", ##__VA_ARGS__, __FILE__, __LINE__)
#define LOG_INFO(L, MSG, ...) L.info(MSG, ##__VA_ARGS__)
#define LOG_WARNING(L, MSG, ...) L.warning(MSG, ##__VA_ARGS__)
#define LOG_ERROR(L, MSG, ...) L.error(MSG, ##__VA_ARGS__)

#else

#include "NothingPrinter.h"
static Logger DEFAULT_LOGGER = Logger(NOTHING_PRINTER);

#define LOG_DEBUG_DELAY(L, T, D, MSG, ...)
#define LOG_DEBUG(L, MSG, ...)
#define LOG_INFO(L, MSG, ...)
#define LOG_WARNING(L, MSG, ...)
#define LOG_ERROR(L, MSG, ...)

#endif
#endif  // ARDUINOLOGGING_LOGGING_H
