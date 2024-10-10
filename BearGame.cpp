//
// Created by Dru on 10/10/2024.
//

#include <iostream>
#include "BearGame.h"

void BearGame::playBearGame()
{
    TeddyBearPicnic picnic;
    int testValues[] = {250, 42, 84, 53, 41};

    for (int n : testValues)
    {
        if (picnic.bears(n))
        {
            std::cout << "bears(" << n << ") is true" << std::endl;
        }
        else
        {
            std::cout << "bears(" << n << ") is false" << std::endl;
        }
    }
}
