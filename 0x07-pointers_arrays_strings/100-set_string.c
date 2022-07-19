#include "main.h"

/**
  * set_string - Sets the value of a pointer to char
  * @s: double pointer string destination
  * @to: pointer to string as the source
  *
  * Return: void
  */

void set_string(char **s, char *to)
{
	*s = to;
}
