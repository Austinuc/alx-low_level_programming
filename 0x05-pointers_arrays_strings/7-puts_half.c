#include "main.h"

/**
  * puts_half - Prints the second half of a string
  * @str: input string
  *
  * Return: void
  */

void puts_half(char *str)
{
	int strlen = 0;
	char *temp = str;
	int n;
	
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	str = temp;
	if (strlen == 1)
	{
		_putchar(*str);
		_putchar('\n');
		return;
	}
	else if ((strlen % 2) == 0)
	{
		n = (strlen) / 2;
	}
	else
	{
		n = (strlen - 1) / 2;
	}
	while (n < strlen)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
