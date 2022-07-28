#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - Concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: bytes number of s2 to concat to s1
  *
  * Return: pointer to newly allocated space in mem containing the concat str
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0;

	if (!s1)
		*s1 = '\0';
	if (!s2)
		*s2 = '\0';
	while (*(s2 + i) != '\0')
		i++;
	if (n >= i)
		n = i + 1;
	i = 0;
	while (*(s1 + i) != '\0')
		i++;
	ptr = malloc(sizeof(char) * n * i);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		if (j == i)
		{
			for (k = 0; k < n; k++, j++)
			{
				*(ptr + j) = *(s2 + k);
			}
			*(ptr + j) = '\0';
			break;
		}
		else
			*(ptr + j) = *(s1 + j);
	}
	return (ptr);
}
