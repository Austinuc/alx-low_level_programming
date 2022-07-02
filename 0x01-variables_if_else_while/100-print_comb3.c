#include <stdio.h>
/**
 * main - Prints all possible combo of two different single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;

	for (first = 48; first < 57; first++)
	{
		for (second = first + 1; second <= 57; second++)
		{
			putchar(first);
			putchar(second);
			if (!(first == 56 && second == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
