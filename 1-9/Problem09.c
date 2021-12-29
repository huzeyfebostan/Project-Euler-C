#include <stdio.h>
#include <math.h>


/*
Special Pythagorean triplet
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main()
{
    int a = 1, b, d;
    float c;

    while (a <= 333)
    {
        b = a;
        while (b <= 666)
        {
            c = (a * a) + (b * b);
            c = sqrt(c);
            if (a + b + c == 1000)
            {
                if (a < b && b < c)
                {
                    d = (int)c;
                    printf("%d\n",a*b*d);
                    break;
                }      
            }
            b++;
        }
        a++;   
    }
}