// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#ifndef ARDUINO_LOGGER_H
#define ARDUINO_LOGGER_H

#include <Arduino.h>

#include "NothingPrinter.h"

// #ifndef ARDUINO_LOG_PRINT
// #define ARDUINO_LOG_PRINT NOTHING_PRINTER
// #endif

class Logger {
public:
    Logger(Printer& printer);

    // void setup();
    void debug(const char*);
    void debug(const char*, float);
    void debug(const char*, int);
    void debug(const char*, String);
    void debug(int);
    void debug(float);
    void debug(double);
    // void debug(const char *fmt, ...);
    void info(const char*);
    void warning(const char*);
    void error(const char*);

    void dbg_print(const char* fmt, ...);
private:

    Printer& _printer;
};

#endif  // ARDUINO_LOGGER_H
