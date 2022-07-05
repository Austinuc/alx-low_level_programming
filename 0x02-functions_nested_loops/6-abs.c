#include "main.h"
/**
  * _abs - Computes the absolute value of a given int
  * @n: input int number
  *
  * Return: positive value of any given int
  */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return ((-1 * (n)));
}
