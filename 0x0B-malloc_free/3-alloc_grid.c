#include "main.h"
#include <stdio.h>
# include <stdlib.h>

/**
  * alloc_grid - allocate 2 D arrary and initialize it by 0
  * @width: width size
  * @height: height size
  * Return: int pointer to the array
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocate memory for rows */
	arr = (int **) malloc(sizeof(int *) * height);

	for (i = 0; i < width; i++)
	{
		/*Allocate size for collumn */
		arr[i] = (int *) malloc(sizeof(int) * width);
	}
	/* intialize the array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
