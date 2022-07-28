#include "main.h"
#include <stdlib.h>

/**
  * _realloc - Reallocates a memory block using malloc and free
  * @ptr: pointer to memory previously allocated
  * @old_size: size in bytes of allocated space for ptr
  * @new_size: new size in bytes of the new memory block
  *
  * Return: pointer to the new reallocated array
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *p = (char *)ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(p);
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(p);
		free(ptr);
		free(new_ptr);
		return (NULL);
	}
	if (p)
	{
		while (i < old_size)
		{
			*(new_ptr + i) = p[i];
			i++;
		}
	}
	return (new_ptr);
}
