#include "main.h"
#include <stdlib.h>

/**
  * array_range - allocate space in memory use malloc and fill by min - max
  * @min: int
  * @max: int
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
