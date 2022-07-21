#include "main.h"

/**
  * _strpbrk - Locates the first occurrence in the string 's' of any of
  * the bytes in the string accept.
  * @s: given string
  * @accept: Bytes of strings given for search
  *
  * Return: Pointer to the byte in s that matches one of the bytes in accept,
  * or NULL otherwise
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
