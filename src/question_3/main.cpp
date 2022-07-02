#include "question3.h"
#include<iostream>

int main()
{
    double meal_price; double tip_rate;    
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        std::cout<< "\n\nPlease enter a meal amount: ";
        std::cin>>meal_price;

        std::cout<< "\nPlease enter a tip rate: ";
        std::cin>>tip_rate;

        Receipt receipt(meal_price, tip_rate);
        std::cout <<  receipt.display_receipt();

        std::cout<<"\nTo continue press \"Y\" or \"y\". Otherwise, press any other key to end.\n";
        std::cin>>choice;
    }

    return  0;
}
