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
	int **array_grid;
	int i = 0, j = 0, *row;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (; i < height; i++)
	{
		row = (int *)malloc(sizeof(int) * width);
		if (row == NULL)
			return (NULL);
		*(array_grid + i) = row;
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
