#include <iostream>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int apple_count)
{
    if (apple_count < 0)
    {
        return "negative";
    }
    else if (apple_count == 0)
    {
        return "no";
    }
    else if (apple_count == 1)
    {
        return "a single";
    }
    else if (apple_count == 2)
    {
        return "a couple of";
    }
    else if (apple_count == 3)
    {
        return "a few";
    }
    else
    {
        return "many";
    }
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int apple_count)
{
    return (apple_count == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}