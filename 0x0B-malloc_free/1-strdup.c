#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Copies a str to a newly allocated space in memory
  * @str: the given string to be copied
  *
  * Return: a pointer to the new string or NULL for insuf memory
  */

char *_strdup(char *str)
{
	char *new_string;
	int i = 0, len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len == 0)
		return (NULL);
	new_string = (char *) malloc(sizeof(char) * len);

	if (new_string == NULL)
		return (NULL);
	while (i < len)
	{
		*(new_string + i) = *(str + i);
		i++;
	}
	return (new_string);
}
