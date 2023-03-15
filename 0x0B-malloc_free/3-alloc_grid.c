#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - display 2-D array of int
 * @width: with of array
 * @height: height of array
 *
 * Return: pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);

		if (arr[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(arr[b]);
			}

			free(arr);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			arr[k][l] = 0;
		}
	}

	return (arr);
}
