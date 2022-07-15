#include "main.h"

/**
  * rot13 - Encodes a string using rot13 algorithm
  * @str: Input string
  *
  * Return: Pointer to encoded string
  */

char *rot13(char *str)
{
	int i = 0, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == alph[j])
			{
				*(str + i) = rot_13[j];
				break;
			}
		}
		j = 0;
		i++;
	}
	return (str);
}
