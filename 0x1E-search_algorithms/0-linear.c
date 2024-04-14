#include "search_algos.h"

/**
  * linear_search - linear search algorithm
  *
  * @array: array
  *
  * @size: size of array
  *
  * @value: value to search for
  *
  * Return: index if success -1 if fail
  */
int linear_search(int *array, size_t size, int value)
{
	size_t  i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
