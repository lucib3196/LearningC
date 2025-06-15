#include <iostream>
#include "functions.h"

int main()
{
    double a{getDoubleFromUser()};
    double b{getDoubleFromUser()};
    char ch{getOperatonFromUser()};

    double val = handleOperation(a, b, ch);
    std::cout << "You Entered \n"
              << a << ch << b << "\n The answer is \n"
              << val << "/n";
    return 0;
}