#include <stdio.h>

/**
  * main -Entry point
  *
  * Return: Always 0.
  */
int add(int, int);

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

int add(int a, int b)
{
	return (a + b);
}
