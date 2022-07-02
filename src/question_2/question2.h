bool test_config();

#ifndef QUESTION2_H
#define QUESTION2_H

class Die
{
    public:
    Die(){}
    int roll();

    private:
    int sides{6};
};
#endif