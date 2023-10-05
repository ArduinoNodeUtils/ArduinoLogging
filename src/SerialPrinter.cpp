// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#include <Serial.h>
#include "SerialPrinter.h"


void SerialPrinter::print(const char *msg) {
    Serial.print(msg);
}
void SerialPrinter::print(float val) {
    Serial.print(val);
}
void SerialPrinter::println(const char *msg) {
    Serial.println(msg);
}
void SerialPrinter::println(float val) {
    Serial.println(val);
}
