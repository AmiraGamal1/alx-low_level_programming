#include "main.h"
#include <stdio.h>

/**
  * _pow_recursion - Count x to power of y
  * @x: int (base)
  * @y: int (power)
  * Return: int (x to power y)
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
