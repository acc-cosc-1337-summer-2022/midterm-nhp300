#include "question3.h"
#include<iostream>

bool test_config()
{
    return true;
}

double Receipt::calculate_tax()
{
    double expected_tax = price * tax;
    return expected_tax;
}

double Receipt::calculate_gratuity()
{
    double final_gratuity = price *gratuity;
    return final_gratuity;
}

double Receipt::display_receipt(){

    std::cout << "\nReceipt\n";
	std::cout << "Meal Amount: "<< Receipt::price << "\n";
	std::cout << "Sales Tax: "<< Receipt::calculate_tax() << "\n";
	std::cout << "Tip Amount: "<< Receipt::calculate_gratuity() << "\n";
	std::cout << "Total:"<< (Receipt::calculate_tax() +Receipt::calculate_gratuity() + Receipt::price)  << "\n";
	std::cout << "\nThank you";

    return 0;
} 