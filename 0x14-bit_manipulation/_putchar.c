#include "main.h"
#include <unistd.h>
/**
  * _putchar - Prints char to stdout
  * @c: input character
  *
  * Return: int ASCII
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
