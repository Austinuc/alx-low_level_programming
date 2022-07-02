#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase = 122;

	while (lowercase >= 97)
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');

	return (0);
}
