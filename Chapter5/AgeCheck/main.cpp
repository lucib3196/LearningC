#include <string>
#include <iostream>
#include <string_view>

void printString(std::string_view str)
{
    std::cout << str << '\n';
}

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ":\n";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of : " << name << ":\n";
    int age{};
    std::cin >> age;
    return age;
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    if (age1 > age2)
    {
        std::cout << name1 << " is older than " << name2;
    }
    else if (age2 > age1)
    {
        std::cout << name2 << " is older than " << name1;
    }
    else
    {
        std::cout << name1 << " is the same age as " << name2;
    };
}

int main()
{
    std::string name1{getName(1)};
    const int age1{getAge(name1)};
    std::string name2{getName(2)};
    const int age2{getAge(name2)};

    printOlder(name1, age1, name2, age2);
}