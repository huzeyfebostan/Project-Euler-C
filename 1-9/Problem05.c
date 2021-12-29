#include <stdio.h>
#include <limits.h>

/*
Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main(void)
{
    int counter = 0, d;
    int a = 1, b = 20;

    for (int  i = 20; i <= INT_MAX; i++)
    {
        for (int z = 1; z <= 20; z++)
        {
            if (i % z == 0)
                counter++;
            else
            {
                counter = 0;
                break;
            }
        }
        if (counter == 20)
        {
            d = i;
            break;   
        }
    }
    printf("%d",d);  

    return 0;       
}