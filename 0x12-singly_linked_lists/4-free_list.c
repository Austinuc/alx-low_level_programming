#include "lists.h"

/**
  * free_list - Frees a given list
  * @head: pointer to the first element of the list
  *
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
