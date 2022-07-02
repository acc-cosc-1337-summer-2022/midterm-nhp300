bool test_config();

#ifndef QUESTION1_H
#define QUESTION1_H

class Rectangle1
{

public:
    
    Rectangle1(int l, int w) : length(l), width(w) {}
    int get_area();
    int get_length();
    int get_width();

    
private:
    int length;
    int width;
};
#endif 