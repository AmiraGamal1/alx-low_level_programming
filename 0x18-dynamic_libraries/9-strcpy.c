#include "main.h"
#include <stdio.h>

/**
  * _strcpy - copy string
  * @dest: destenation character
  * @src: source character
  * Return: Always 0.
  */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
