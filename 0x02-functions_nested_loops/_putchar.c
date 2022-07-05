#include <unistd.h>
#include "main.h"
/**
  * _putchar - Prints input characters to stdout
  * @c: input character
  *
  * Return: 1 on success and -1 if error is found
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
