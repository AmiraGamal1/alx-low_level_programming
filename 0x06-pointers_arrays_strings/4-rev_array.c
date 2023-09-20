#include "main.h"
#include <stdio.h>

/**
  * reverse_array - reverse  element of the array
  * @a: array of int
  * @n: size of the array
  */
void reverse_array(int *a, int n)
{
	int i, mid, tmp;

	if (n % 2 == 0)
		mid = n / 2;
	else
		mid = (n + 1) / 2;
	for (i = 0; i < mid; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i] = tmp;
	}
}
