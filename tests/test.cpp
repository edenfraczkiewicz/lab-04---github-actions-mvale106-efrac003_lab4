#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

//Constructor
TEST(constructorTest, defaultConstructor) {
	Rectangle rect;
	EXPECT_EQ(rect.get_width() ,0);
	EXPECT_EQ(rect.get_height(), 0);
}

TEST(constructorTest, posParameters) {
	Rectangle rect(100, 31);
	EXPECT_EQ(rect.get_width(), 100);
	EXPECT_EQ(rect.get_height(), 31);
}

TEST(constructorTest, negParameters) {
	Rectangle rect(-7, -9999);
	EXPECT_EQ(rect.get_width(), -7);
	EXPECT_EQ(rect.get_height(), -9999);
}

//Area
TEST(areaTest, zeroArea) {
	Rectangle rect;
	rect.set_width(542);
	rect.set_height(0);
	EXPECT_EQ(rect.area(), 0);
}

TEST(areaTest, posArea) {
	Rectangle rect;
        rect.set_width(42);
        rect.set_height(23);
        EXPECT_EQ(rect.area(), 966);
}

TEST(areaTest, negArea) {
	Rectangle rect;
        rect.set_width(-83);
        rect.set_height(149);
        EXPECT_EQ(rect.area(), -12367);
}

//Perimeter
TEST(perimeterTest, zeroPerimeter) {
	Rectangle rect;
        rect.set_width(0);
        rect.set_height(0);
        EXPECT_EQ(rect.perimeter(), 0);
}

TEST(perimeterTest, posPerimeter) {
        Rectangle rect;
        rect.set_width(23);
        rect.set_height(8);
        EXPECT_EQ(rect.perimeter(), 62);
}

TEST(perimeterTest, negPerimeter) {
        Rectangle rect;
        rect.set_width(-4);
        rect.set_height(-652);
        EXPECT_EQ(rect.perimeter(), -1312);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
