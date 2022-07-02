#include "question2.h"
#include<ctime>
#include<cstdlib>


bool test_config()
{
    return true;
}

int Die::roll()
{
    int ran_value = (rand() % sides) + 1;
    return ran_value;
}