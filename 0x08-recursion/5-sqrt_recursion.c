#include "main.h"
#include <stdio.h>

/**
  * _recursion - calcluate square root use binary search
  * @n: int number
  * @start: start point
  * @end: end point
  * Return: square root
  */
int _recursion(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
			return _recursion(n, mid + 1, end);
		else
			return _recursion(n, start, mid - 1);
	}
	return (-1);
}
/**
  * _sqrt_recursion - count the natural spure root
  * @n: int number
  * Return: the int spure root
  */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	if (n < 0)
		return (-1);
	else
		return (_recursion(n, 1, n));
}
