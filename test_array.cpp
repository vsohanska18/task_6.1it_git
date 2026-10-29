#include <gtest/gtest.h>

// Перевірка умови для від'ємного парного числа
TEST(ArrayTest, NegativeEvenNumber)
{
    int x = -6;

    EXPECT_TRUE(x % 2 == 0 && x < 0);
}

// Перевірка, що від'ємне непарне число не підходить
TEST(ArrayTest, NegativeOddNumber)
{
    int x = -3;

    EXPECT_FALSE(x % 2 == 0 && x < 0);
}

// Перевірка, що додатне парне число не підходить
TEST(ArrayTest, PositiveEvenNumber)
{
    int x = 8;

    EXPECT_FALSE(x % 2 == 0 && x < 0);
}