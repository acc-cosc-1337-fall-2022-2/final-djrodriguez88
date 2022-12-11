//
#include <iostream>
#include<cstdlib>
#include <vector>
#include <time.h>

using
    std::vector,
    std::cout;

class Die{

public:
    void roll();
    int rolled_value() const;


private:
    int roll_value;
    vector <int> sides {1,2,3,4,5,6};


};