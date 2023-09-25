#include "main.h"
#include <stdio.h>

/**
  * _memcpy - copies memory area
  * @dest: destination memory area
  * @src: source Memory area to be copy
  * @n: number of byte to fill
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *d = (unsigned char *) dest;
	unsigned char *s = (unsigned char *)src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
