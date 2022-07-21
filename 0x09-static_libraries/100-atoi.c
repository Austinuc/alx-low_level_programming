#include "main.h"
#include <stdio.h>

/**
  * _atoi - Prints first occurrence of numbers in a string, taking - and +
  * signs into account
  * @s: input string
  *
  * Return: returns numbers or zero if none is found
  */

int _atoi(char *s)
{
	unsigned int num = 0, minus_sign = 1, i = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			minus_sign *= -1;
		}
		/* filters 1st occurrence of number */
		if ((*s >= '0') && (*s <= '9'))
		{
			/* print only 1st number sequence. stop otherwise */
			while (i == 0)
			{
				if ((*s >= '0') && (*s <= '9'))
				{
					num += *s - 48;
					/* prevent overflow for u_int*/
					if ((num / 1000000000) == 0)
					{
						num *= 10; /*append 0 */
					}
					else
					{
						return (num * minus_sign);
					}
					s++;
				}
				else
				{
					num /= 10; /* rm last digit 0*/
					return (num * minus_sign);
				}
			}
		}
		s++;
	}
	return (0); /* no number in string */
}
