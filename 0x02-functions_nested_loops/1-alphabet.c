#include "main.h"
/**
  * main - Prints the alphabets in lowercase
  *
  * Return: 0 for success
  */
int main(void)
{
	int str = 97;
	while (str <= 122)
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');

	return (0);
}
