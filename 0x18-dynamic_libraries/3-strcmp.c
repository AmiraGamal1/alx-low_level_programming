#include "main.h"
#include <stdio.h>

/**
  * _strcmp - compare two string
  * @s1: char pointer
  * @s2: char pointer
  * Return: int 0 if equal, else return the differnce of ascii code
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			/* check if the two char equal*/
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] != '\0')
	{
		/* s1 longer than s2 */
		return (s1[i] - '0');
	}
	else if (s2[i] != '\0')
	{
		/* s2 longer than s1 */
		return ('0' - s2[2]);
	}
	else
	{
		/* s1 = s2*/
		return (0);
	}
}
