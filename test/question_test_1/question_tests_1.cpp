#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verfiy Rectangle class")
{
	Rectangle1 rectangle(5,5);  //l,w
	REQUIRE(rectangle.get_area() == 25);

	Rectangle1 myRectangle(3,10);
	REQUIRE(myRectangle.get_area() == 30);

	Rectangle1 myRectangle2(10,10);
	REQUIRE(myRectangle2.get_area() ==100);
}