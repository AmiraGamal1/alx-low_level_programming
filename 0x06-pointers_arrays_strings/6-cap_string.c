#include "main.h"
#include <stdio.h>

/**
  * cap_string - capitalize the words
  * @a: char pointer
  * Return: char pointer
  */
char *cap_string(char *a)
{
	int i, j;
	char sep[] = {' ', '\n', '\t', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	i = 0;
	while (a[i] != '\0')
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (a[i] == sep[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] = a[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (a);
}
