#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an Integer ";
    int num{};
    std::cin >> num;
    return num;
}

int doubleNumber(int x){
    return x * 2;}

int main()
{
    int x{getValueFromUser()};
    int y{getValueFromUser()};

    std::cout << x << "+" << y << "=" << x + y << "\n";

    std::cout <<"Double x:  " << doubleNumber(x) << " Double y: " << doubleNumber(y);
}