#include <iostream>
#include "functions.h"

double KinematicEquation(float initial_vel, float time, float current_height)
{
    const double gravity{9.81};
    double deltaY = (initial_vel * time) + 0.5 * gravity * time * time;
    // std::cout << "Current Delta " << deltaY;
    return current_height - deltaY;
}

float GetTimeUser()
{
    std::cout << "Enter an initial time in seconds: ";
    float time{};
    std::cin >> time;
    return time;
}

float getHeight()
{
    {
        std::cout << "Enter the intial height of building in meter: ";
        float height{};
        std::cin >> height;
        return height;
    }
}
