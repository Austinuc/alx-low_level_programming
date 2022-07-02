#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			alphabet++;
			continue;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');

	return (0);
}
