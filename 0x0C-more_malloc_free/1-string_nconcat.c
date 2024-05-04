#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenate two string
  * @s1: first string
  * @s2: second string
  * @n: number of string from s2 to concatnate to s1
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0, size = 0;
	char *str;

	while (s1 && s1[l1] != '\0')
		l1++;
	while (s2 && s2[l2] != '\0')
		l2++;

	if (n >= l2)
		size = l1 + l2 + 1;
	else
		size = l1 + n + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (j = 0;  j < (size - l1 - 1); j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
