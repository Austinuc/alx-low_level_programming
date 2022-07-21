#include "main.h"

/**
  * _memcpy - Copies 'n' bytes from memory area src to memory area dest
  * @dest: Destination memory area
  * @src: Source memory area
  * @n: number of memory bytes to be copied
  *
  * Return: Pointer to dest memory area
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
