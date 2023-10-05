// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#ifndef ARDUINOLOGGING_PRINTER_H
#define ARDUINOLOGGING_PRINTER_H

class Printer {

    // virtual Printer() = 0;
public:
    Printer(){}
    virtual ~Printer(){}
    virtual void print(const char*) = 0;
    virtual void print(float) = 0;
    virtual void println(const char*) = 0;
    virtual void println(float) = 0;

};

#endif  // ARDUINOLOGGING_PRINTER_H
