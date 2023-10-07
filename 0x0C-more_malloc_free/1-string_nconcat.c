#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strlen - count the string length
  * @str: string
  * Return: string length
  */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str && str[i] != '\0')
		i++;
	return (i);
}
/**
  * string_nconcat - concatenate two string
  * @s1: first string
  * @s2: second string
  * @n: number of string from s2 to concatnate to s1
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j, size;
	char *str;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
		size = l1 + l2 + 1;
	else
		size = l1 + n + 1;
	str = malloc(sizeof(size) * size);
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; i < l1; i++)
			str[i] = s1[i];
	}
	if (s2)
	{
		for (j = 0;  j < size - l1; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
