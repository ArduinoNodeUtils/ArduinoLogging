// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#include "Logger.h"

#define ARDUINO_LOG_DEBUG
#define ARDUINO_LOG_PRINT _printer

#include <cstdarg>

Logger::Logger(Printer& printer) :_printer(printer) {}
// void Logger::setup() {
//     ARDUINO_LOG_PRINT.println("serial logger set up...");
// }
void Logger::debug(const char * msg) {
#ifdef ARDUINO_LOG_DEBUG
#   ifdef ARDUINO_LOG_PRINT
    ARDUINO_LOG_PRINT.println(msg);
#   endif
#endif
}
void Logger::debug(const char * msg, float var) {
#ifdef ARDUINO_LOG_DEBUG
#   ifdef ARDUINO_LOG_PRINT
    ARDUINO_LOG_PRINT.print(msg);
    ARDUINO_LOG_PRINT.println(var);
#   endif
#endif
}
void Logger::debug(const char *msg, int var) {
#ifdef ARDUINO_LOG_DEBUG
#   ifdef ARDUINO_LOG_PRINT
    ARDUINO_LOG_PRINT.print(msg);
    ARDUINO_LOG_PRINT.println(var);
#   endif
#endif
}
void Logger::debug(int) {}
void Logger::debug(float) {}
void Logger::debug(double) {}

// void Logger::debug(const char *fmt...) {
// #ifdef ARDUINO_LOG_DEBUG
// #   ifdef ARDUINO_LOG_PRINT
//
//     va_list args;
//     va_start(args, fmt);
//
//     while (*fmt != '\0') {
//         if (*fmt == 'd') {
//             int i = va_arg(args, int);
//             ARDUINO_LOG_PRINT.print(i);
//         } else if (*fmt == 'c') {
//             // note automatic conversion to integral type
//             int c = va_arg(args, int);
//             ARDUINO_LOG_PRINT.print(static_cast<char>(c));
//         } else if (*fmt == 'f') {
//             double d = va_arg(args, double);
//             ARDUINO_LOG_PRINT.print(d);
//         }
//         ++fmt;
//     }
//     ARDUINO_LOG_PRINT.println("");
//
//     va_end(args);
//
// #   endif
// #endif
// }

void Logger::info(const char *msg) {
#ifdef ARDUINO_LOG_PRINT
    ARDUINO_LOG_PRINT.println(msg);
#endif
}
void Logger::warning(const char *msg) {
#ifdef ARDUINO_LOG_PRINT
    ARDUINO_LOG_PRINT.println(msg);
#endif
}
void Logger::error(const char *) {}

void Logger::debug(const char *msg, String msg2) {
#ifdef ARDUINO_LOG_DEBUG
#   ifdef ARDUINO_LOG_PRINT
  ARDUINO_LOG_PRINT.print(msg);
  ARDUINO_LOG_PRINT.println(msg2.c_str());
#   endif
#endif
}


void Logger::dbg_print(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    char buff[512];
#if defined(__AVR__)
    vsnprintf_P(buff, sizeof(buff), fmt, ap);
#else
    vsnprintf(buff, sizeof(buff), fmt, ap);
#endif
    ARDUINO_LOG_PRINT.println(buff);
    va_end(ap);
}
