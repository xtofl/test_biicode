#include <google/gtest/gtest.h>

#include "main.h"

int main(int argc, char **argv) {
				testing::InitGoogleTest(&argc, argv);
				return RUN_ALL_TESTS();
}

namespace xtofl { namespace test {

TEST(Main, sumOfOneAndOneIsZero)
{
				EXPECT_EQ(0, sum(1, 1));
}

} }
