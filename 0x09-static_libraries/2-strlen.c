#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: given input string pointer address
  *
  * Return: length of the given string
  */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
