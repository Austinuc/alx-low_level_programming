#include "main.h"
/**
  * _islower - Checks for lowercase letters and returns 1 if true
  * or 0 if false
  * @c: input character
  *
  * Return: 1 if true and 0 if false
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122) /* checks by ASCI codes for lowercase */
		return (1);
	else
		return (0);
}
