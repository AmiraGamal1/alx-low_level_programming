#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: string
  * @c: char to match
  * Return: pointer to the first occurance of the character c
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
