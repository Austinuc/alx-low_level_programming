#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @n: input number
  *
  * Return: Last digit of the given n
  */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	_putchar(48 + (n % 10));

	return (n % 10);
}
