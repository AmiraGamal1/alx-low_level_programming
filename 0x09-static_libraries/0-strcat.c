#include "main.h"
#include <stdio.h>

/**
  * _strcat - concatenat two string
  * @dest: char pointer
  * @src: char pointer
  * Return: char pointer
  */
char *_strcat(char *dest, char *src)
{
	int i, j;
	/* Modve to the end of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	/* concatenates src to dest */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
