#include "main.h"

/**
  * _isdigit - check if c is 0 to 9
  * Return: 1 if digit, 0 otherwise
  * @c: int number
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
