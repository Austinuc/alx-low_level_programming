#include "main.h"

/**
  * _strcpy - copies a string into another string
  * @dest: destination string
  * @src: source input string to be copied
  *
  * Return: pointer to the destination string
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;
	char *temp = src;

	while (*src != '\0')
	{
		len++;
		src++;
	}
	src = temp; /* reseting src to point to 1st element */
	for (; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
