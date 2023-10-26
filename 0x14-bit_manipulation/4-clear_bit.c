#include "main.h"

/**
 * clear_bit - clear the bit
 * @n: number
 *@index: the index
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(*n) * 8)
		return (-1);

	b = ~(1 << index);
	*n = *n & b;

	return (1);
}
