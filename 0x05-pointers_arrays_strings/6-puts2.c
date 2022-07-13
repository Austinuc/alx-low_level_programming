#include "main.h"

/**
  * puts2 - Prints every even character of a string from the first
  * @str: input string
  *
  * Return: void
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || (i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
