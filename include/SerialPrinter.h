// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#ifndef ARDUINOLOGGING_SERIALPRINTER_H
#define ARDUINOLOGGING_SERIALPRINTER_H

#include "Printer.h"
class SerialPrinter : public Printer {
public:
    void print(const char*);
    void print(float);
    void println(const char*);
    void println(float);
};

#endif  // ARDUINOLOGGING_SERIALPRINTER_H
