#include <stdio.h>

/*
Sum square difference
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 +...+ 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 +...+ 10) = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
3025 - 385 = 2640;
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int main(void)
{
    int multipsum = 0, summultip = 0, sum = 0, bignum;

    for (int i = 1; i <= 100; i++)
    {
        multipsum += i * i;
    }

    for (int a = 1; a <= 100; a++)
    {
        sum += a;
    }

    summultip = sum * sum;

    if (multipsum > summultip)
        printf("%d\n",multipsum-summultip);
    else
        printf("%d\n",summultip-multipsum);

    return 0;
    
}
