#include <stdio.h>
/**
 * main - Prints 0123456789abcdef
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits = '0';
	char a_to_f = 'a';

	while (digits <= '9')
	{
		putchar(digits);
		digits++;
	}
	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');

	return (0);
}
