#include "main.h"

/**
  * _memset - fill memory with constant byte
  * @s: pointer to the area of memory
  * @b: constent byte
  * @n: first n byte
  * Return: pointer to the area of memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
