#include <iostream>

int main()
{
    constexpr int x{7};
    constexpr int y{4};

    std::cout << "int/int " << x / y << "\n";
    std::cout << "double/int " << static_cast<double>(x) / y << "\n";
    std::cout << "int/double " << (x) / static_cast<double>(y) << "\n";
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';
}