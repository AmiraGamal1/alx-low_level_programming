#include "main.h"
#include <stdio.h>

/**
  * rev_string - reverse string
  * @s: character
  * Return: void
  */
void rev_string(char *s)
{
	int i, j, size;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	size = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[size];
		s[size--] = tmp;
	}
}
