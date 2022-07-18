#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring
  * @s: Given string
  * @accept: given substring
  *
  * Return: unsigned int of the num of bytes in the initial segment
  * of s consisting only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = '\0', i = 0, j = 0;

	while (*(accept + i) != '\0') /* get each xter of accept */
	{
		j = 0;
		while (*(s + j) != '\0') /* search 4 only 1st instance in s*/
		{
			if (*(accept + i) == *(s + j))
			{
				/* do not overwrite n with lower substr len*/
				if (n < j)
				{
					n = j;
					break;
				}
				else
				{
					break;
				}
			}
			j++;
		}
		i++;
	}
	/* len of substr = (n + 1) */
	if (n != '\0')
		return (n + 1);
	else
		return (0);
}
