#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - execute a function
  * @array: array of int
  * @size: size of the array
  * @action: pointer to function
  * Return: nothings
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
