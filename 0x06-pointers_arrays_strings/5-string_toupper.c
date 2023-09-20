#include "main.h"
#include <stdio.h>
/**
  * string_toupper - change lower letter to upper letter
  * @a: character pointer
  * Return: Always 0
  */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
