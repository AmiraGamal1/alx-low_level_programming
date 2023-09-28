#include "main.h"
#include <stdio.h>

/**
  * _puts_recursion - print string
  * @s: char to be print
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
