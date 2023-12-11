#include <stdio.h>

/**
  * print_to_98 - print number from n to 98
  *
  * @n: integer
  * Return: nothings.
  */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("98\n");
}

