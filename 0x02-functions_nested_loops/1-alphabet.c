#include "main.h"
/**
  * print_alphabet - Prints the alphabets in lowercase
  * @str: string variable
  *
  * Return: 0 for success
  */
void print_alphabet(void)
{
	int str = 97;

	while (str <= 122)
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
