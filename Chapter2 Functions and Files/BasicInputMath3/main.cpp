#include <iostream>

int getValueFromUser();
int doubleNumber(int x);
int main()
{
    std::cout << "Ver3" << "\n";
    int x{getValueFromUser()};
    int y{getValueFromUser()};

    std::cout << x << "+" << y << "=" << x + y << "\n";

    std::cout <<"Double x:  " << doubleNumber(x) << " Double y: " << doubleNumber(y);
}