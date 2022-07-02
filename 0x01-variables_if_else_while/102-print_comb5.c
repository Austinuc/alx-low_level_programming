#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digits numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;
	int fourth;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			for (third = first; third <= 57; third++)
			{
				for (fourth = second + 1; fourth <= 57; fourth++)
				{
					if (third == fourth) /* skip for equal digits */
					{
						continue;
					}
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(fourth);
					if (!((first == 57 && second == 56) &&
						(third == 57 && fourth == 57)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
