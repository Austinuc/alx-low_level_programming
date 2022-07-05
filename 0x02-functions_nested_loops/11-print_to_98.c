#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: input natural number
  *
  * Result: Always 0 for success
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");
		return;
	}

	else
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
		return;
	}
}
