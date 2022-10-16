#include <stdio.h>

/*
Power digit sum
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

#define MAXDIGITS 500
#define EXPONENT 1000

int main()
{
  int largenum[MAXDIGITS] =  {0};
  int i, j, temp, carry, sum;

  largenum [0] = 1;
  for (i = 0; i < EXPONENT; i++)
  {
    carry = 0;

    for (j = 0; j < MAXDIGITS; j++)
    {
      temp = 2 * largenum[j] + carry;
      carry = 0;

      if (temp > 9)
      {
        largenum[j] = temp % 10;
        carry = temp / 10;
      }
      else
        largenum[j] = temp;
    }
  }
  sum = 0;
  for (i = MAXDIGITS - 1; i >= 0; i--)
  {
    printf("%d",largenum[i]);
    sum += largenum[i];
  }
  printf("\n%d\n", sum);
}