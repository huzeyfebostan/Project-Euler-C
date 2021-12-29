#include <stdio.h>
#include <stdlib.h>

/*
Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int reverse(int revers)
{
    int temp, out=0, rest;
 
    temp = revers;
    
    while ( temp > 0 )
    {    
        rest = temp % 10;
        out = out * 10 + rest;
        temp /= 10;    
    }
    
    return out; 
}

int main(void)
{
    int a  = 100, b = 100, c = 0, wu = 0;
    int multip = 0, swap = 0;

    for (int a = 100;a <= 999; a++)
    {
        for (int b = 100;b <= 999; b++)
        {
            multip = a * b;
            c = reverse(multip);
            if (c == multip)
                swap = multip;
            c = 0;
            if (swap >= wu)
                wu = swap;
        }
    }
    printf("%d\n",wu);

    return 0;
}