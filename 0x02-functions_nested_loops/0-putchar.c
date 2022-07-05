#include "main.h"
#include <unistd.h>
/**
  * _putchar - Prints _putchar and new line
  * @c: Character input
  *
  * Return: On success 1
  */
_putchar(char c)
{
	return (write(1, &c, 1));
}
