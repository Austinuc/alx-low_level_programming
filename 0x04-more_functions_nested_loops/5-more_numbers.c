#include "main.h"

/**
  * more_numbers - Prints 0 - 14 ten times
  * Return: void
  */

void more_numbers(void)
{
	int n = 0;
	int i = 0;

	while (i < 10)
	{
		for (; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
		}
		i++;
		n = 0;
		_putchar('\n');
	}
}
