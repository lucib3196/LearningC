#include <cmath>
#include <iostream>
#include <algorithm>

bool approximateEqualAbs(double a, double b, double epsilon)
{
    return std::abs(a - b) <= epsilon;
}
bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main()
{
    constexpr double eps{0.0001};

    constexpr double a{1};
    constexpr double b{1.00001};

    std::cout << approximateEqualAbs(a, b, eps) << "\n";

    if (!approximatelyEqualRel(a, b, 0.001))
    {
        std::cout << a << " is not equal to " << b << "\n";
    };

    // Second Test
    constexpr double c{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    constexpr double relEps{1e-8};
    constexpr double absEps{1e-12};

    std::cout << std::boolalpha;

    std::cout << approximatelyEqualRel(c, 1.0, relEps) << '\n';
    std::cout << approximatelyEqualRel(c - 1.0, 0.0, relEps) << '\n';
}