#include <stdio.h>
#include <limits.h>

/*
10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

int main(void)
{
    int flag = 0, count = 0, swap = 0;

    for (int i = 3; i <= INT_MAX; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        if (flag == 0)
            count++;
        if (count == 10000)
        {
            swap = i;
            break;
        }
        flag = 0;
    }

    printf("%d\n",swap);

    return 0;
}