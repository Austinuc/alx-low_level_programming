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
	int i = 0, j, index = 0, status;

	while (*(needle + i) != '\0')
	{
		j = 0, status = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(needle) == *(haystack + j) && i == 0)
			{
				index = j;
				break;
			}
			if (*(needle + i) == *(haystack + j))
			{
				status = 1;
			}
			j++;
			if (*(haystack + j) == '\0' && status == 0)
				return ('\0');
		}
		i++;
	}
	return (haystack + index);
}
