#include "main.h"

/**
  * _strchr - Locates the character in a string.
  * @s: given string to locate the desired character
  * @c: character to be located in the string s
  *
  * Return: Pointer to the 1st occurence of c in s or NULL otherwise
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
		return (s + i); /* when s is just a character or c = NULL */
	return ('\0');
}
