#include <iostream>
#include "functions.h"

double getDoubleFromUser()
{
    std::cout << "Enter an Decimal Number ";
    double num{};
    std::cin >> num;
    return num;
}

char getOperatonFromUser()
{
    std::cout << "Enter +, -, *, , / or  * : ";
    char ch{};
    std::cin >> ch;
    std::cout << "You entered: " << ch << '\n';

    return ch;
}

double handleOperation(double a, double b, char ch)
{
    switch (ch)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b != 0)
        {
            return static_cast<double>(a) / b;
        }
        else
        {
            std::cout << "Error Cannot Divide by 0";
            return 0.0;
        }
    default:
        std::cout << "Unknown operation\n";
        return a + b;
        return 0.0;
    }
}
