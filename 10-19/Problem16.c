#include <stdio.h>

/*
Power digit sum
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

int main()
{
  long long int sum = 2;
  int number = 0;

  for(int i = 1; i < 1000; i++)
  {
    sum = sum * 2;
    printf("%lld\n",sum);
  }
  
  /*while (sum >= 0)
  {
    number = sum % 10;
    sum = sum / 10;
  }*/
}