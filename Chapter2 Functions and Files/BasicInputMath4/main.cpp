#include <iostream>
#include "functions.h"
int main()
{
    std::cout << "Ver4" << "\n";
    int x{getValueFromUser()};
    int y{getValueFromUser()};

    std::cout << x << "+" << y << "=" << x + y << "\n";

    std::cout <<"Double x:  " << doubleNumber(x) << " Double y: " << doubleNumber(y);
}