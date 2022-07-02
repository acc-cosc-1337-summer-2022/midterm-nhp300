bool test_config();

#ifndef QUESTION3_H
#define QUESTION3_H

class Receipt
{
   
    public:
    Receipt(){}
    Receipt(double meal_price, double tip_rate) : price(meal_price), gratuity(tip_rate) {}
    double calculate_tax();
    double calculate_gratuity();
    double display_receipt();
    
    private:
    const double tax=.08; //const
    double gratuity;
    double price;  
};
#endif