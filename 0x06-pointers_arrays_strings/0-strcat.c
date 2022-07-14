#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: destination string
  * @src: Source string to be added
  *
  * Return: Pointer to dest string after concat
  */

int len(char *str);

char *_strcat(char *dest, char *src)
{
	int i = 0, lendest;

	lendest = len(dest);

	while (i >= 0)
	{
		*(dest + lendest) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
		lendest++;
	}
	return (dest);
}

int len(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}
