#include "main.h"
#include <unistd.h>

/**
  * _putchar - Prints input character to stdout
  * @c: input character
  *
  * Return: int ASCII
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
