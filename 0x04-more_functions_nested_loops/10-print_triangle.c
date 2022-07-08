#include "main.h"

/**
  * print_triangle - Prints traingle of a given input size
  * @size: input size of the triangle
  *
  * Return: void
  */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (j == (i - 1))
			{
				while (j < size)
				{
					_putchar(35);
					j++;
				}
				if (i != 1)
				{
					_putchar('\n');
				}
				break;
			}
			_putchar(' ');
		}
	}
	_putchar('\n');

}
