#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - create array of char
  * @size: size of array
  * @c: fill array with c
  * Return: pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
