#include "main.h"
#include <stdio.h>

/**
  * factorial - count the factorial
  * @n: int number
  * Return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
