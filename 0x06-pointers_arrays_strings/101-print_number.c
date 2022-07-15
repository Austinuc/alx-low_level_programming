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
	int div = 1000000000; /* max digits for int data type */

	if (n < 0)
	{
		_putchar('-');
		n *= -1; /* convert n to +ve number */
	}

	while (n / div == 0 && div >= 100)
	{
		div /= 10;
	}

	while (div != 10)
	{
		_putchar((n / div) + 48); /* print 1st digit */
		n %= div; /* set n to the fractional part */
		div /= 10; /* reduce divisor's digit num to get next int */
	}

	if (n / div != 0)
		_putchar((n / div) + 48);

	_putchar((n % div) + 48);
}
