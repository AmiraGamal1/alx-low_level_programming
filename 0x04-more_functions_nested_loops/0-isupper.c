#include "main.h"

/**
  * _isupper - check uppercase character
  * Return: 1 if c is uppercase, 0 otherwise
  * @c: int
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
