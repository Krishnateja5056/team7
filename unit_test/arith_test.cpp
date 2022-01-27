#include "arith.cpp"
#include <gtest/gtest.h>
 
TEST(Divisiontest, positiveNos)
    { 
    ASSERT_EQ(6.0, 36/6);
    ASSERT_EQ(5.0, 25/5);
    }
TEST(Additiontest,positiveNos)
	{
	ASSERT_EQ(25, 15+10);
	ASSERT_EQ(35, -5+40);
	}
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
