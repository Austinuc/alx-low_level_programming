#include "main.h"
/**
  * times_table - Prints 9 times table
  *
  * Returns: Always 0 for success
  */
void times_table(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
			}

			_putchar('0' + (i * j));

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
