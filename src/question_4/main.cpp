#include<question4.h>
#include<iostream>


int main()
{

   char choice = 'Y';
   double c;
   do
   {
      std::cout << "Enter temperature in Celsius: \n";
      std::cin >>c;

      std::cout << "Temperature in Fahrenheit is: " << get_fahrenheit(c);

      std::cout << "\nWould you like to continue? Press \"Y\" or \"y\". Otherwise press any key to end. \n";
      std::cin >> choice;
   }while( choice == 'Y' || choice == 'y');

   return 0;
}