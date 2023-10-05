// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#include <api/Common.h>

#include "DelayPrinter.h"

void DelayPrinter::println(const char *msg, float val) {

    auto now = millis();

    if (now > _timeout_until) {
        _printer.print(msg);
        _printer.println(val);
        _timeout_until = now + _printing_timeout;
    }
}
DelayPrinter::DelayPrinter(Printer &printer) : _printer(printer) {}
