#include "main.h"
#include <stdio.h>

/**
  * leet - encoding char a e o t l
  * @a: pointer char
  * Return: Always 0
  */
char *leet(char *a)
{
	int i, j;
	char alph[] = {'A', '4', 'E', '3', 'O', '0', 'T', '7', 'L', '1'};

	/*alph: character to encode and its code*/
	i = 0;
	while (a[i] != '\0')
	{
		for(j = 0; j < 10; j+=2)
		{
			if (a[i] == alph[j] || a[i] == alph[j] + 32)
				a[i] = alph[j + 1];
		}
		i++;
	}
	return (a);
}
