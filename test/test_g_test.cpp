
#include "gtest/gtest.h"

TEST (foo /*test suite name*/, bar /*test name*/) {
    EXPECT_EQ (9.0, (3.0 * 2.0)); // fail, test continues
    ASSERT_EQ (0.0, (0.0));     // success
    ASSERT_EQ (9, (3) * (-3.0));  // fail, test interrupts
    ASSERT_EQ (-9, (-3) * (-3.0));// not executed due to the previous assert
}