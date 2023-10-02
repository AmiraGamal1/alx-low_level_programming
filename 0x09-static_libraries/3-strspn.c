#include "main.h"

/**
  * _strspn - count the length of a prefix
  * @s: string
  * @accept: char to match
  * Return: number of substring
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*ptr == *s)
				break;
			ptr++;
		}
		if (*ptr == '\0')
			return (count);
		count++;
		s++;
	}
	return (count);
}
