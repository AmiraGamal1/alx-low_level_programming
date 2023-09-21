#include "main.h"
#include <stdio.h>

/**
  * rot13 - Cyphering by key 13
  * @a: pointer char
  * Return: pointer char
  */
char *rot13(char *a)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (a[i] != '\0')
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			/*char index in alphabetic order*/
			j = 0;
			while (a[i] != alph[j] && alph[j] != '\0')
				j++;
			/* rotate a[i]*/
			a[i] = rot[j];
		}
		i++;
	}
	return (a);
}
