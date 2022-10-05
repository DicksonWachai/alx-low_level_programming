#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - two dimensional array of integers
 * @width: the width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
	{
		return (NULL);
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		twoD[height_index] = (int *) malloc(sizeof(int) * width);
		if (twoD[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
			{
				free(twoD[height_index]);
			}
			free(twoD);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
		{
			twoD[height_index][width_index] = 0;
		}
	}
	return (twoD);
}
