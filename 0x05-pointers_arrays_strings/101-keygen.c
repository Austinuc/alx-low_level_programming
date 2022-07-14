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
	int i = 0;
	time_t t;

	/* Intitializes random number generator */
	srand((unsigned int) time(&t));

	/* Prints random numbers from 0 to 127 */
	for (; i < 20; i++)
	{
		printf("%c", rand() % 128);
	}
	printf("%c\n", rand() % 128);

	return (0);
}
