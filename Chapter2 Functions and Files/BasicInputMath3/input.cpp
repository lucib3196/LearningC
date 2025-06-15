#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an Integer ";
    int num{};
    std::cin >> num;
    return num;
}