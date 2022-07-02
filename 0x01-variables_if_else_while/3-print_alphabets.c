#include <stdio.h>
/**
 * main - Entry piont
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 97;
	char uppercase = 65;

	while (lowercase <= 122)
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 90)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}
