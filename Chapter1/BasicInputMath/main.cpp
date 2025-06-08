#include <iostream>
int main()
{

    std::cout << "Enter a Integer: ";

    int num{};

    std::cin >> num;

    std::cout << "Double that number is : " << num * 2 << '\n';
    std::cout << "Triple that number is : " << num * 3 << '\n';

    std::cout << "Enter a 2nd number : ";
    int num2{};
    std::cin >> num2;
    std::cout << "The sum of the first number and the second number is " << num + num2 << '\n';
    return 0;
}