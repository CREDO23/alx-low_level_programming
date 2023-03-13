#include "main.h"

/**
 * **alloc_grid - THe funtion
 * @width: The larger
 * @height: The heigth
 * Return: An array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width  <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
