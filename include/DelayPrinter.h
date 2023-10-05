// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#ifndef ARDUINOLOGGING_DELAYPRINTER_H
#define ARDUINOLOGGING_DELAYPRINTER_H

#include "Printer.h"

class DelayPrinter {

public:

    explicit DelayPrinter(Printer& printer);

    void println(const char*, float);

private:

    unsigned long _printing_timeout = 500;

    unsigned long _timeout_until = 0;

    Printer& _printer;
};

#endif  // ARDUINOLOGGING_DELAYPRINTER_H
