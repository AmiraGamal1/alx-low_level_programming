#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked -  allocate space use malloc
  * @b: space to allocate
  * Return: pointer to space allocated
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
