#include <stdio.h>
/**
  * main - Prints _putchar and new line
  * Return: Always 0 (Success)
  */
int main(void)
{
	char strArray[] = {"_putchar"}; /* Array string */
	int i = 0; /* initialize to loop through the array */

	while (strArray[i] != 0)
	{
		putchar(strArray[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
