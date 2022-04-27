#include <iostream>
#include <gtest/gtest.h>
using namespace std;

class MyClass
{
    int baseValue;

public:
    MyClass(int _bv) : baseValue(_bv){};
    void Increment(int byValue)
    {
        baseValue += byValue;
    }
    int getValue() { return baseValue; }
};

struct MyClassTest : public testing::Test
{
    MyClass *mc;
    void setup() { mc = new MyClass(100); }
    void TearDown() { delete mc; }
};

// TEST(classTest, Increment_by_5)
// {
//     // Arrange
//     MyClass mc(100);

//     // Act
//     mc.Increment(5);

//     // Assert
//     ASSERT_EQ(mc.getValue(), 105);
// }

// Test Fixer
TEST_F(MyClassTest, Increment_by_5)
{
    // Act
    mc->Increment(5);

    // Assert
    ASSERT_EQ(mc->getValue(), 105);
}
TEST_F(MyClassTest, Increment_by_10)
{
    // Act
    mc->Increment(10);

    // Assert
    ASSERT_EQ(mc->getValue(), 110);
}

int main(int argc, char const *argv[])
{
    testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}