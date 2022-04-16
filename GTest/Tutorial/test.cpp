#include <iostream>
#include <gtest/gtest.h>
using namespace std;

// TEST(TestName, subTest_1)
// {
//     // ASSERT_TRUE(1 == 1);
//     // ASSERT_TRUE(1 == 2);
//     ASSERT_FALSE(1 == 2);
// }

// TEST(TestName, subTest_2)
// {
//     ASSERT_TRUE(1 == 2);
// }

// TEST(TestName2, subTest_1)
// {
//     ASSERT_TRUE(1 == 1);
// }

TEST(TestName2, subTest_1)
{
    // ASSERT_FALSE(1 == 1);
    // ASSERT_TRUE(1 == 1);
    ASSERT_EQ(1, 1);
    cout << "After Assertion" << endl;
}

int main(int argc, char const *argv[])
{
    testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}