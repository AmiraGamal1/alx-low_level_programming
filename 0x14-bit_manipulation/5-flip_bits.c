#include "main.h"

/**
  * flip_bits - number of int to flib to other
  * @n: number
  * @m: othe number
  * Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int b;

	b = n ^ m;

	while (b != 0)
	{
		if (b & 1)
			i++;
		b >>= 1;
	}

	return (i);
}
