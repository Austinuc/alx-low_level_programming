#include "main.h"
/**
  * print_times_table - Prints the n times table starting with 0
  * @n: input number
  *
  * Return: Always 0
  */
void print_times_table(int n)
{
	int i = 0;
	int j, k;

	if ((n >= 0) && (n <= 15)) /* don't run for n < 0 or n >15 */
	{
		for (i = 0; i <= n; i++) /* loop: ix , ix, ... */
		{
			for (j = 0; j <= n; j++) /* get the row: ix1, ix2, ..., ixn */
			{
				k = i * j; /* multiplication table vals */
				if (k < 10) /*print single digits from 0-9 */
				{
					if (j != 0) /*rm space from 1st col*/
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + k);
				}
				if ((k >= 10) && (k < 100)) /* Prints from 10-99 */
				{
					if (j != 0) /*rm space from 1st col*/
					{
						_putchar(' ');
					}
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
				if ((k / 100) >= 1) /* Prints from 100-999 */
				{
					_putchar('0' + (k / 100)); /*print 1st digit*/
					_putchar('0' + ((k / 10) % 10));
					_putchar('0' + (k % 10));
				}
				if (j != n) /*rmv space from last col*/
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
