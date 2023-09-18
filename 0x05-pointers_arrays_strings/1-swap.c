#include "main.h"
#include <stdio.h>

/**
  * swap_int - Swap two value
  * @a: int number
  * @b: int number
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
