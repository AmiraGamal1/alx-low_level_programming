#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - allocate space and copy string
  * @str: string to be copy
  * Return: pointer to string
  */
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (*(str + size) != '\0')
	{
		size++;
	}

	s = malloc(size + 1);

	if (s == NULL)
		return (0);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
