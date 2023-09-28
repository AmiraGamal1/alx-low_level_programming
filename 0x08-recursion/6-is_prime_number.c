#include "main.h"
#include <stdio.h>

/**
  * _prime - check if number is prime
  * @n: int number
  * @end: end of checking (root of n)
  * @start: start of search (2)
  * Return: 1 if prime 0 else
  */
int _prime(int n, int start, int end)
{
	if (n % start == 0)
		return (0);
	if (start <= end)
		return (_prime(n, start + 1, end));
	return (1);
}
/**
  * is_prime_number - check if the number is prime
   * @n: int
   * Return: 1 if prime 0 else
   */

int is_prime_number(int n)
{
	int root;

	root = (n + 1) / 2;

	if (n < 0 || n == 1 || n == 0)
		return (0);
	return (_prime(n, 2, root));
}
