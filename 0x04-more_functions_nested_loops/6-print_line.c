#include "main.h"

/**
  * print_line - Prints line in the terminal
  * @n: number of line character
  *
  * Return: void
  */

void print_line(int n)
{
	int i = 0;
	if (!(n <= 0))
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
