#include "lists.h"

/**
  * print_list - Prints all the elements of a list
  * @h: given lists
  *
  * Return: number of elements in the list
  */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		len++;
	}
	return (len);
}
