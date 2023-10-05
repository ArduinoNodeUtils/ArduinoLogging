// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#ifndef ARDUINOLOGGING_NOTHINGPRINTER_H
#define ARDUINOLOGGING_NOTHINGPRINTER_H

#include "Printer.h"
class NothingPrinter : public Printer {
public:
    void print(const char*);
    void print(float);
    void println(const char*);
    void println(float);

};

extern NothingPrinter NOTHING_PRINTER;

#endif  // ARDUINOLOGGING_NOTHINGPRINTER_H
