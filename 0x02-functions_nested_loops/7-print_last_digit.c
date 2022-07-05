#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @n: input number
  *
  * Return: Last digit of the given n
  */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n %= 10;
		_putchar(n);
	}
	else
	{
		n = ((-1) * (n)) % 10;
		_putchar(n);
	}
	return (n);
}
