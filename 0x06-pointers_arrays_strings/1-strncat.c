#include "main.h"
#include <stdio.h>

/**
  * _strncat - Concat two strings using n bytes from src string
  * @dest: Destination string
  * @src: Source string to be concatenated
  * @n: n bytes of src to be added
  *
  * Return: Pointer to dest string
  */

char *_strncat(char *dest, char *src, int n)
{
	int lendest = 0, count = 0;

	if (n)
	{
		while (*(dest + lendest) != '\0')
		{
			lendest++;
		}
		while (count < n)
		{
			if (*(src + count) == '\0')
				break;
			*(dest + lendest) = *(src + count);
			count++;
			lendest++;
		}
	}
	return (dest);
}
