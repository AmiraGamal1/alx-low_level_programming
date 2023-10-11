#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - find the index of the element in the array
  * @array: array of int number
  * @size: array size
  * @cmp: pointer to the array
  * Return: return the index of the element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
