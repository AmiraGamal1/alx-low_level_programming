#include "main.h"
#include <stdio.h>

/**
  * _puts - prints a string
  * @str: character
  * Return: void
  */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
