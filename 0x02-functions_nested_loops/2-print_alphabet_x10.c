#include "main.h"
/**
  * print_alphabet_x10 - Prints all the letters of the alphabets in 
  * lowercase 10 times
  *
  * Return: 0 for success
  */
void print_alphabet_x10(void)
{
	int str = 97;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (str <= 122)
		{
			_putchar(str);
			str++;
		}
		str = 97;
		_putchar('\n');
	}
}
