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
	int i = 0, lensrc, lendest;
	char *ptr = src;

	lensrc = len(src);
	lendest = len(dest);
	src = ptr;

	for (i = 0; i < lensrc; i++)
	{
		dest[lendest + i] = *src;
		src++;
	}
	return (dest);
}

int len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
