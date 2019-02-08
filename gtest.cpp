#include "B.h"
#include <gtest/gtest.h>

TEST(test_case_name, test_name)
{
	B();
	ASSERT_TRUE(  1 == 1 );
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
