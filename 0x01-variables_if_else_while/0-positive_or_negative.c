#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
  init n;
  
  srand(time(0));
  n=rand() - RAND_MAX /2;
  printf("%dt", n);
  return (0);
}
