#include "main.h"
#include <stdio.h>

/**
  * _strncpy - copy n element of src to dest
  * @dest: char pointer
  * @src: char pointer
  * @n: int
  * Return: char pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
