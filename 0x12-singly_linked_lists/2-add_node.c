#include "lists.h"

/**
  * add_node - Adds a node at the beggining of a list
  * @head: points to the fist element of the list
  * @str: string coppied to the str property of the list
  *
  * Return: pointer to the address of the new element added or NULL if failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i = 0;

	while (*(str + i) != '\0')
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;

	new->str = strdup(str);
	new->len = i;

	return (*head);
}
