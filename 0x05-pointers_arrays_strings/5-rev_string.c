#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses any given string
  * @s: input string
  *
  * Return: void
  */

void rev_string(char *s)
{
	int strlen = 0;
	int i = 0, j;
	char temp, *p = s;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	s = p;
	j = strlen -1;
	while (i < j)
	{
		temp = s[j];

		s[j] = s[i];

		s[i] = temp;

		i++;
		j--;

	}
}
