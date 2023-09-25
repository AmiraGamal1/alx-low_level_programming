#include <stdio.h>

/**
  * print_diagsums - print the sum of diagonals
  * @a: array of size n * n
  * @size: size of the array
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += (*(a + (size * i) + i));
		d2 += (*(a + (size * (i + 1)) - (i + 1)));
	}
	printf("%d, %d\n", d1, d2);
}
