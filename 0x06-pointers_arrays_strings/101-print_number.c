#include "main.h"

/**
  * print_number - print numbeer
  * @n: integer
  * Return: void
  */
void print_number(int n)
{
	unsigned int N;
	int rev;

	if (n < 0)
	{
		N = -n;
		_putchar('-');
	}
	else
		N = n;
	if (N == 0)
		_putchar('0');
	/* reverse the number*/
	rev = 0;
	while (N > 00)
	{
		rev = (rev * 10) + (N % 10);
		N /= 10;
	}
	while (rev > 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
