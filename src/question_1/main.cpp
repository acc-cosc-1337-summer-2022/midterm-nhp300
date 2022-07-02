#include "question1.h"
#include<iostream>

int main()
{

int length; int width;
char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {

        std::cout<<"Please enter length of rectangle: "<<"\n";
        std::cin>>length;

        std::cout<<"Please enter width of rectangle: "<<"\n";
        std::cin>>width;

        Rectangle1 myRectangle(length, width);

        std::cout<<"The length of the rectangle is: "<<myRectangle.get_length()<<"\n";
        std::cout<<"The width of the rectangle is: "<<myRectangle.get_width()<<"\n";
        std::cout<<"The area of the rectangle is: "<<myRectangle.get_area()<<"\n";

        std::cout<<"\nTo continue press \"Y\" or \"y\". Otherwise, press any other key to end.\n";
        std::cin>>choice;
    }

    return 0;
}