#include "main.h"
#include <stdlib.h>

/**
  * _calloc - locate space use malloc then initialize it by 0
  * @nmemb: number of elements
  * @size: size of allocated space
  * Return: pointer to allocated space
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	arr = malloc(total_size);
	if (arr == NULL)
		return (NULL);
	/* fill byte to 0 */
	for (i = 0; i < total_size; i++)
		arr[i] = 0;

	return (arr);
}
