#include <stdio.h>
/**
 * main - Prints all possible combinations of three different single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 48; first < 56; first++)
	{
		for (second = first + 1; second <= 56; second++)
		{
			for (third = second + 1; third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (!(first == 55 && second == 56 && third == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
