#include "main.cpp"
#include <gtest/gtest.h>

TEST(myFunctionTest, positiveCheck)
{
    ASSERT_EQ(45, myFunction(10));
    ASSERT_EQ(1770, myFunction(60));
    ASSERT_EQ(990, myFunction(45.7));
    ASSERT_EQ(4465, myFunction(95.32));
}

TEST(myFunctionTest, negativeCheck)
{
    ASSERT_EQ(0, myFunction(-10));
    ASSERT_EQ(0, myFunction(-60));
    ASSERT_EQ(0, myFunction(-45.7));
    ASSERT_EQ(0, myFunction(-95.32));
}

int main(int argc, char const *argv[])
{
    cout << "****** Manisha Starts Here ******" << endl;
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}