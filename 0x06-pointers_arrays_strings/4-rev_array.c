#include "main.h"

/**
  * reverse_array - Reverse the contents of an int array
  * @a: given array
  * @n: number of array elements
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	/*start swapping at index 0 and n-1 and move inwards */
	int *p1 = a, *p2 = a + (n - 1);

	while (p1 < p2)
	{
		*p1 = *p1 + *p2;
		*p2 = *p1 - *p2;
		*p1 = *p1 - *p2;
		p1++, p2--;
	}
}
