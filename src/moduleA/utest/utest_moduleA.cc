/**
 * @file
 *
 * @ingroup Cmake-boiler-plate
 *
 * @brief Unit test of moduleA
 *
 * This unit test is part of the cmake boiler plate example. It contains one test suite for google test,
 * which verifies the output message of moduleA
 * 
 * MIT License

  Copyright (c) 2024 Gero Sparwald

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

 */


#include <gtest/gtest.h>
#include "moduleA_api.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  char * pOutputMessageRef;
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);

  moduleA_function(&pOutputMessageRef);

  EXPECT_STREQ(pOutputMessageRef, "Hello world from: moduleA_function()\n");

}
