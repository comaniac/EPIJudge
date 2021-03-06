// @library
#pragma once

#include "console_color.h"

// We may not detect STACK_OVERFLOW in C++ (Java and Python detect that).
enum TestResult {
  PASSED,
  FAILED,
  TIMEOUT,
  UNKNOWN_EXCEPTION,
  /*STACK_OVERFLOW*/
};
