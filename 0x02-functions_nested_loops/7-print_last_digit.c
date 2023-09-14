#include <stdio.h>

/**
  * main - Entry point
  *
  *Return: Alyas 0.
  */
int print_last_digit(int);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

int print_last_digit(int i)
{
	if (i >= 0)
	{
		printf("%d", i % 10);
		return (i % 10);
	}
	else
	{
		printf("%d", -1 * (i % 10));
		return (-1 * (i % 10));
	}
}
