#include <stdio.h>

/*
Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int main(void)
{
  unsigned long long n = 600851475143ULL;
  unsigned long long i;

  for (i = 2ULL; i < n; i++) 
  {
    while (n % i == 0)
      n /= i;
  }
  printf("%llu\n", n);

  return 0;
}