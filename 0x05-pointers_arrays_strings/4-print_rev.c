#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse orders
 * @s: character
 * Return: void
 */
void print_rev(char *s)
{

	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i != -1)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
