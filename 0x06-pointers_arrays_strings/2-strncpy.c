#include "main.h"

/**
  * _strncpy - Copies a string to buffer pointed to by another string
  * @dest: Destination string
  * @src: Source string to be copied
  * @n: number of bytes of src to be copied
  *
  * Return: Pointer to dest string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (; c < n && src[c] != '\0'; c++)
		*(dest + c) = *(src + c);
	for (; c < n; c++)
		*(dest + c) = '\0';
	
	return (dest);
}
