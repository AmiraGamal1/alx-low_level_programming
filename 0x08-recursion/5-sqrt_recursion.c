#include "main.h"
#include <stdio.h>

/**
  * _recursion - calcluate square root use binary search
  * @n: int number
  * @start: start point
  * @end: end point
  * Return: square root
  */
int _recursion(int n, long int start, long int end)
{
	long int mid;
	long int mul;

	if (start > end)
		return ((int) end);
	mid = (start + end) / 2;
	mul = mid * mid;
	if (mul == n)
		return ((int) mid);
	else if (mul < n)
	{
		return (_recursion(n, mid + 1, end));
	}
	else
	{
		return (_recursion(n, start, mid - 1));
	}
}
/**
  * _sqrt_recursion - count the natural spure root
  * @n: int number
  * Return: the int spure root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_recursion(n, 1, n / 2));
}
