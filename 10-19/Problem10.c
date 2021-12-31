#include <stdio.h>
#include <stdlib.h>

/*
Summation of primes
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main(void)
{
  unsigned long long sum = 0ULL;
  unsigned i, j;
  char *sieve;
  size_t n = 2000000;

  sieve = calloc(n, sizeof *sieve);
  for (i = 2; i < n; i++) 
  {
    if (!sieve[i]) 
    {
      sum += i;
      for (j = i*2; j < n; j += i)
        sieve[j] = 1;
    }
  }
  free(sieve);

  printf("%llu\n", sum);

  return 0;
}