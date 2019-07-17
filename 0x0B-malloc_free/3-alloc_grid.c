#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
