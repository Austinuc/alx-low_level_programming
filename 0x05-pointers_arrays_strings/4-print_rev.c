#include "main.h"

/**
  * print_rev - Prints given string in reverse order followed be a new line
  * @s: input string address
  *
  * Return: void
  */

void print_rev(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	while ((strlen - 1) >= 0)
	{
		--s;
		_putchar(*s);
		strlen--;
	}
	_putchar('\n');
}
