//add include statements
#include "dna.h"

//add function(s) code here
int factorial(int num)
{
    int result = 1;

    for(int i = 1; i <= num; i++)
    {
        result *= i;
    }

    return result;
}

int gcd(int num1, int num2)
{
    int lowerValue, result;
    
    if (num1 < num2)
    {
        lowerValue = num1;
    }
    else
    {
        lowerValue = num2;
    }

    for (int i = 1; i <= lowerValue; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            result = i;
        }
    }

    return result;
}