#include "main.h"

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
	int i = 0, j = 0;
	char *res = '\0';

	while (*(haystack + j) != '\0')
	{
		if (*(needle) == *(haystack + j))
		{
			haystack = (haystack + j);
			j = 0, i = 0;
			while (*(needle + i) != '\0')
			{
				if (*(haystack + i) != *(needle + i))
				{
					return (res);
				}
				i++;
			}
			return (haystack);
		}
		j++;
	}
	return (res);
}
