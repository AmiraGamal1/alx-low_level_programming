#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string
  * @accept: string to be match
  * Return: pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*ptr == *s)
				return (s);
			ptr++;
		}
		s++;
	}
	return (NULL);
}
