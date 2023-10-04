#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strlen - count the length of the string
  * @str: pointer to the string
  * Return: length of the string
  */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
  * argstostr - concatenate all the arguments
  * @ac: number of argument
  * @av: pointer to arguments
  * Return: pointer to the string
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* allocate space for **av */
	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]);
		size += 1;
	}

	str = malloc(sizeof(char) * size + 1);
	/* check if fail to allocate space */
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
