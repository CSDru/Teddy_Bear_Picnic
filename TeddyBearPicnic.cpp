//
// Created by Dru on 10/10/2024.
//

#include "TeddyBearPicnic.h"

// Function to check if it's possible to reach exactly 42 bears
bool TeddyBearPicnic::bears(int n)
{
    // Base case: if n is exactly 42, return true
    if (n == 42)
    {
        return true;
    }

    // If n is less than 42, return false (can't go negative)
    if (n < 42)
    {
        return false;
    }

    // If n is even, give back n/2 bears
    if ((n % 2) == 0)
    {
        if (bears(n / 2))
        {
            return true;
        }
    }

    // If n is divisible by 3 or 4, multiply last two digits and give back that many bears
    if ((n % 3 == 0) || (n % 4 == 0))
    {
        int lastDigit = n % 10;
        int nextToLastDigit = (n % 100) / 10;
        int bearsToGiveBack = lastDigit * nextToLastDigit;

        if (bears(n - bearsToGiveBack))
        {
            return true;
        }
    }

    // If n is divisible by 5, give back exactly 42 bears
    if (n % 5 == 0)
    {
        if (bears(n - 42))
        {
            return true;
        }
    }

    // If no condition met, return false
    return false;
}
