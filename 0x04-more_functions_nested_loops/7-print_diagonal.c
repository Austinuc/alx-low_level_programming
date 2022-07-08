#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  * @n: number of '\' to be printed
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			/*no space for 1st looping*/
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			j = 0;
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
