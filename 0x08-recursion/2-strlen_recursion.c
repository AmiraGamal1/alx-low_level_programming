#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - count the length of string
  * @s: pointer to string
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
