#include "main.h"
/**
  * print_times_table - Prints the n times table starting with 0
  * @n: input number
  *
  * Return: Always 0
  */
void print_times_table(int n)
{
	int row, column, product;

	if ((n >= 0) && (n <= 15)) /* don't run for n < 0 or n >15 */
	{
		for (row = 0; row <= n; row++) /* loop: ix , ix, ... */
		{
			_putchar(48);
			for (column = 1; column <= n; column++) /* get the row: ix1, ix2, ..., ixn */
			{
				product = row * column; /* multiplication table vals */
				_putchar(',');
				_putchar(' ');
				if (product < 10) /*print single digits from 0-9 */
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product < 100) /* Prints from 10-99 */
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100) /* Prints from 100-999 */
				{
					_putchar('0' + (product / 100)); /*print 1st digit*/
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}
