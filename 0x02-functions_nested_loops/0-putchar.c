#include "main.h"
#include <unistd.h>
/**
  * main - Prints _putchar and new line
  * @c: Character input
  *
  * Return: On success 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
