#include <iostream>
#include <gtest/gtest.h>
using namespace std;

class MyClass
{
    string id;

public:
    MyClass(string _id) : id(_id) {}
    string GetId() { return id; }
};

// TEST(TestName, SubTestName_1)
// {
//     // EXPECT_EQ(1, 1);
//     EXPECT_EQ(1, 2);
// }

//  Unit Tests --> self test entity. Steps --> arrange, act, assert
// TEST(TestName, increment_by_5)
// {
//     // arrange
//     int value = 100;
//     int increment = 5;

//     // act
//     value = value + increment;

//     // assert
//     ASSERT_EQ(value, 105);
// }

// TEST(TestName, increment_by_10)
// {
//     // arrange
//     int value = 100;
//     int increment = 10;

//     // act
//     value = value + increment;

//     // assert
//     ASSERT_EQ(value, 110);
// }

TEST(TestName, CheckingString_1)
{
    // arrange
    MyClass mc("root");

    // act
    string value = mc.GetId();
    // assert
    // ASSERT_EQ(value.c_str(), "root"); // not-working this is testing the value of string
    // ASSERT_STREQ(value.c_str(), "root");
    EXPECT_STREQ(value.c_str(), "root");
}

int main(int argc, char const *argv[])
{
    testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}