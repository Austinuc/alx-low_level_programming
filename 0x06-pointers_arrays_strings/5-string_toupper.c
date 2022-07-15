#include "main.h"

/**
  * string_toupper - converts lowercase letters to uppercase
  * @str: given dtring
  *
  * Return: pointer to the given string in lowercase
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}
