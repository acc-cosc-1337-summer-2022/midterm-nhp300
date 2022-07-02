#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test Receipt class 1"){

	Receipt receipt(10, .20);
	REQUIRE(receipt.calculate_gratuity() == 2);
	REQUIRE(receipt.calculate_tax() == .8);
}

TEST_CASE("Test Receipt class 2"){

	Receipt receipt(20, .15);
	REQUIRE(receipt.calculate_gratuity() == 3);
	REQUIRE(receipt.calculate_tax() == 1.60);
}

TEST_CASE("Test Receipt class 3"){

	Receipt receipt(30, .10);
	REQUIRE(receipt.calculate_gratuity() == 3);
	REQUIRE(receipt.calculate_tax() == 2.40);
}