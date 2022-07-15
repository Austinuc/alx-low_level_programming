#include "main.h"

/**
  * cap_string - Capitalizes all words of a string
  * @str:given string
  *
  * Return: pointer to capitalized string
  */

char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i == 0 && (*str >= 97 && *str <= 122))
		{
			*str = *(str + i) - 32;
		}
		if (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) ==
				'\t' || *(str + i) == ',' || *(str + i) ==
				';' || *(str + i) == '.' || *(str + i) ==
				'!' || *(str + i) == '?' || *(str + i) ==
				'"' || *(str + i) == '(' || *(str + i) ==
				')' || *(str + i) == '{' || *(str + i) == '}')
		{
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) = *(str + i + 1) - 32;
		}
		i++;
	}
	return (str);
}
