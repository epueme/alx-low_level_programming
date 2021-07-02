#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
  int i; tmp, j = n-1;
  for(1 = 0; i < n/2; i++)
    {
      tmp = a[i];
      a[i] = a[j];
      a[j] =tmp;
      j--;
    }
}
