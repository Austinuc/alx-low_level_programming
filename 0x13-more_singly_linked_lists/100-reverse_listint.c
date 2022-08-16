#include "lists.h"

/**
  * reverse_listint - Reverses a linked list
  * @head: Address of the pointer to the head node of the list
  *
  * Return: pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *left, *right;

	if (*head)
	{
		left = NULL;
		right = *head;
		*head = (*head)->next;
		right->next = left;
	}
	while (*head)
	{
		left = right;
		right = *head;
		if ((*head)->next)
			*head = (*head)->next;
		else
		{
			right->next = left;
			break;
		}
		right->next = left;
	}
	return (*head);
}
