#include <google/gtest/gtest.h>

#include "sum.h"

int main(int argc, char **argv) {
				testing::InitGoogleTest(&argc, argv);
				return RUN_ALL_TESTS();
}

namespace xtofl { namespace test {

TEST(Main, sumOfOneAndOneIsZero)
{
				EXPECT_EQ(0, sum(1, 1));
				EXPECT_EQ(1, sum(0, 1));
}

} }
