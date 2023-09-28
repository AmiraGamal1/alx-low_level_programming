#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string in reverse order
 * @s: char to be print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
