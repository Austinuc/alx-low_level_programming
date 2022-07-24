#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - Allocates memory space for a 2-D int array initialized with 0
  * @width: number of rows of the array
  * @height: number of column
  *
  * Return: a pointer to the 2-D array or NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int **array_grid = NULL;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_grid = malloc(sizeof(int) * height); /*create the rows*/
	if (array_grid == NULL)
	{
		free(array_grid);
		return (NULL);
	}
	for (; i < height; i++)
	{
		array_grid[i] = malloc(sizeof(int) * width); /* for cols*/
		if (array_grid[i] == NULL)
		{
			free(array_grid[i]);
			for (--i; i >= 0; i--)
				free(array_grid[i]);
			return (NULL);
		}
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			array_grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array_grid);
}
