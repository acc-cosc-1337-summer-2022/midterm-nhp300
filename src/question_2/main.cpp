#include "question2.h"
#include<ctime>
#include<cstdlib>
#include<iostream>
 

int main()
{

char choice = 'y';
srand(time(NULL));

    while(choice == 'y' || choice == 'Y')
    {
        Die dice;
        std::cout<<"The dice roll value is: "<<dice.roll()<<"\n";

        std::cout<<"\nTo roll the dice press \"Y\" or \"y\". Otherwise, press any other key to end.\n";
        std::cin>>choice;
    }

    return 0;
}