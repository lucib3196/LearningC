#include <iostream>
#include "functions.h"

int main()
{

    float height{getHeight()};
    float time{GetTimeUser()};
    float i{0.0};

    while (i <= time)
    {
        height = KinematicEquation(0.0f, i, height);
        if (height >= 0)
        {
            std::cout << "At time " << i << " the ball is at height: " << height << "\n";
        }
        else
        {
            std::cout << "At " << i << " seconds, the ball is on the ground \n";
            return 0;
        };

        i++;
    }

    return 0;
}