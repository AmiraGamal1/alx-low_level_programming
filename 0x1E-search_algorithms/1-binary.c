#include "search_algos.h"

/**
  * binary_search - binary search algorithm
  *
  * @array: array
  *
  * @size: size of the array
  *
  * @value: value to find
  *
  * Return: index if found else -1
  */
int binary_search(int *array, size_t size, int value)
{
	int i, l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
