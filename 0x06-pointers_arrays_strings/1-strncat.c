#include "main.h"
#include <stdio.h>

/**
  * _strncat - concatenat two string
  * @dest: char pointer
  * @src: char pointer
  * @n: int
  * Return: char pointer
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/* Modve to the end of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	/* concatenates src to dest */
	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
