#include <stdio.h>

/*
Lattice paths
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

int main(void)
{
    unsigned long long n = 40, k = 20, res = 1, solution;

    for (unsigned long long i = 0; i < k; ++i)
    {
        res *= (n-i);
        res /= (i+1);
    }

    solution = res;
    printf("%lld",solution);

    return 0;
}