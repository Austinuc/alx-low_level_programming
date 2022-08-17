#include "lists.h"

/**
  * find_listint_loop - Finds a loop in a list
  * @head: pointer to first node
  *
  * Return: address of nodes where the loop starts or NULL
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		if (head->next == NULL && head->n)
		{
			return (head);
		}
		ptr = (void *)head;
		head = head->next;
		ptr->next = NULL;
	}
	return (NULL);
}
