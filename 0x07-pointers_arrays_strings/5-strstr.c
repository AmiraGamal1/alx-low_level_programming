#include "main.h"
#include <stdio.h>

/**
  * _strstr -  function finds the first occurrence of the substring.
  * @haystack: string to match
  * @needle: substring
  * Return: pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; *needle != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
	}
	return (NULL);
}
