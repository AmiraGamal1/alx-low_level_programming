#include "main.h"
#include <stdio.h>

/**
  * puts2 - print half of the string
  * @str: character
  * Return: void
  */
void puts2(char *str)
{

	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
