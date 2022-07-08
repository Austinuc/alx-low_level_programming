#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  * @n: number of '\' to be printed
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i = 1;
	int j = 0;

	if (!( n <= 0))
	{
		for (; i <= n; i++)
		{
			for (; j < i; j++)
			{
				_putchar(' ');
			}
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
