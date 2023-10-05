// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#include "NothingPrinter.h"
void NothingPrinter::print(const char *) {}
void NothingPrinter::print(float) {}
void NothingPrinter::println(const char *) {}
void NothingPrinter::println(float) {}

NothingPrinter NOTHING_PRINTER;
