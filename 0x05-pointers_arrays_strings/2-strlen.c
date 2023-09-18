#include "main.h"
#include <stdio.h>

/**
  * _strlen - Count the string length
  * @s: character
  * Return: length of the string
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
