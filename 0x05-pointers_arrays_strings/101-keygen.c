#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Generates random valid passwords
  *
  * Return: Always 0
  */

int main(void)
{
	int i = 0, c = 0;
	time_t t;

	/* Intitializes random number generator */
	srand((unsigned int) time(&t));

	/* Prints random numbers from 0 to 127 */
	while (i < 2772)
	{
		c = rand() % 128;
		if (( i + c) > 2772)
			break;
		i += c;
		printf("%c", c);
	}
	printf("%c\n", (2772 - i));

	return (0);
}
