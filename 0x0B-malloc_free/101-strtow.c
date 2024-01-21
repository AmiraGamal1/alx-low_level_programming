#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * num_words - count the number of words
  * @str: strinf
  * Return: number of words
  */
int num_words(char *str)
{
	int count, i;
	int prev = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (prev || i == 0)
			{
				count++;
			}
			prev = 0;
		}
		else
			prev = 1;
	}
	return (count);
}
/**
  * strtow - split string into word
  * @str: string of words
  * Return: pointer to array of strings
  */
char **strtow(char *str)
{
	char **s;
	int i, count, start, end;

	if (str == NULL || str == "")
		return (NULL);

	count = num_words(str);
	s = (char **) malloc(sizeof(char *) * count);
	if (s == NULL)
		return (NULL);
	start = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (		
	}

}
