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
	int j;

	if ((n > 15) || (n < 0)) /* don't run for n < 0 or n >15 */
	{
		return;
	}
	else
		while (i <= n) /* loop through n to get range as columns eg: ix , ix, ... */
		{
			for (j = 0; j <= n; j++) /* get the row multiples for each colum eg: ix1, ix2, ..., ixn */
			{
				int k = i * j; /* multiplication table vals */

				/*
				   * k grows in value from single digits to multiple digits
				   * for n <= 15 && n > 0; max digits for each k is 3, ie 15x15=225
				   */
				if (k < 10) /*print single digits from 0-9 */
				{
					if (j != 0) /*rm space from 1st col*/
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + k);

					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}

				if ((k >= 10) && (k < 100)) /* Print double digits from 10-99 */
				{
					if (j != 0) /*rm space from 1st col*/
					{
						_putchar(' ');
					}

					/*print last 2 digit*/
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));

					if (j != n) /*remove frm last colums*/
					{
						_putchar(',');
						_putchar(' ');
					}
				}

				if ((k / 100) >= 1) /* Print tripple digits from 100-999 */
				{
					_putchar('0' + (k / 100)); /*print 1st digit*/
					k %= 100; /* take only remaining part*/

					/*print rem last 2 digit*/
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
					
					if (j != n) /*remove comma and space from last colums*/
					{
						_putchar(',');
						_putchar(' ');
					}
				}

			}
			_putchar('\n');
			i++; /* go to next value and compute the multiplication table */
		}
}
