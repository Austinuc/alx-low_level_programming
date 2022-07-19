#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Prints the sum of the two diagonals of a square matrix
  * @a: Pointer to the square matrix
  * @size: size of the square matrix
  *
  * Approach: the square matrix was traversed as a single array
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i = 0, j, sum1 = 0, sum2 = 0;
	int elem = size * size;

	j = size - 1;
	while (i < elem)
	{
		sum1 += a[i];
		sum2 += a[j];
		i += size + 1;
		j += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
