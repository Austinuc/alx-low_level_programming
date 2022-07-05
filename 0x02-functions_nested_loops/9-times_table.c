#include "main.h"
/**
  * times_table - Prints 9 times table
  *
  * Returns: Always 0 for success
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0 && ((i * j) < 10))
			{
				_putchar(' ');
			}
			if ((i * j) < 10)
			{
				_putchar('0' + (i * j));
			}
			if ((i * j) >= 10)
			{
				k = i * j;
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
