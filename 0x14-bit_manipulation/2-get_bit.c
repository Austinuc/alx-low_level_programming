#include "main.h"
#include <stdbool.h>

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: given number
  * @index: given index
  *
  * Return: 1 or 0
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = -1;
	bool bit;
	if (n == 0 && index < 64)
		i = 0;
	if (n)
	{
		bit = n & (1 << index);
		i = bit;
	}
	return (i);
}
