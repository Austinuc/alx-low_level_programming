#include "main.h"
#include <stdio.h>

/**
  * _strstr - Finds the first occurrence of the substring 'needle' in the
  * string 'haystack'.
  * @haystack: given string to be searched
  * @needle: given search substring
  *
  * Return: Pointer to the beginning of the located substring or NULL otherwise
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	while (*(haystack + j) != '\0' && k == 0)
	{
		if (*(needle) == *(haystack + j))
		{
			haystack = (haystack + j);
			i = 0;
			while (*(needle + i) != '\0' && k == 0)
			{
				if (*(haystack + i) != *(needle + i))
				{
					k = 1;
					break;
				}
				i++;
			}
			if (k == 0)
				return (haystack);
		}
		j++;
	}
	return (NULL);
}
