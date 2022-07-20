#include "main.h"

/**
  * _print_rev_recursion - Prints string in reverse order
  * @s: input string
  *
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
