#include "main.h"

/**
  * set_bit - find bit in given index
  * @n: number
  * @index: index
  * Return: bit
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(n) * 8)
		return (-1);

	b = (*n >> index) | 1;
	b = b << index;
	*n = *n | b;

	return (1);
}
