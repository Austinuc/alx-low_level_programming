#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog and allocates space
  * @name: new dog name
  * @age: new dog age
  * @owner: new dog owner
  *
  * Return: Pointer to new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
