#include "main.h"

/**
  * print_number - Prints an int with _putchar function
  * @n: input integer
  *
  * Description: (n / div) to get the 1st digit of n. Then (n = n % div &&
  * div = div / 10) to continue to the next digit. Repeat until all digits are
  * printed.
  * Return: Void
  */

void print_number(int n)
{
	unsigned int div = 1000000000; /* max digits for int data type */
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1; /* convert n to +ve number */
	}
	else
		m = n;

	while (m / div == 0 && div >= 100)
	{
		div /= 10;
	}

	while (div != 10)
	{
		_putchar((m / div) + 48); /* print 1st digit */
		m %= div; /* set n to the fractional part */
		div /= 10; /* reduce divisor's digit num to get next int */
	}

	if (m / div != 0)
		_putchar((m / div) + 48);

	_putchar((m % div) + 48);
}
