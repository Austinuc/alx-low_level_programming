#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of an array
  * @a: The given array
  * @n: number of elements of the array
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
