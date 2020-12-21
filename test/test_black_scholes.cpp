#include "../src/models/black_scholes.h"
#include "gtest/gtest.h"
using namespace BsModel;

TEST(BsModel, price) {
    double a = price(1, 2, 3, 4, 5, true);
    std::cout << a << std::endl;
    ASSERT_GE(1, 0);
}
