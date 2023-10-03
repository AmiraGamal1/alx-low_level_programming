#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strint
  * @s1: string
  * @s2: string
  * Return: pointer to string
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *str;

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	str = malloc(size1 + size2 + 1);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (i != size1)
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (j != size2)
		{
			str[i + j] = s2[j];
			j++;
		}
	}
	str[i + j] = '\0';

	return (str);
}
