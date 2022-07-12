#include "main.h"

/**
  * swap_int - Swaps the values of two given integers
  * @a: 1st int pointer
  * @b: 2nd int pointer
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
