#include "main.h"
#include <stdio.h>

/**
  * _atoi - convert str to int
  * @s: string
  * Return: int
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/*Skip leadind space and alphabets*/
	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '\0')
	{
		return (0);
	}
	/*check rhe char before digirs if it -/+*/
	if (s[i-1] == '-' || s[i-1] == '+')
	{
		sign = (s[i-1] == '-') ? -1 : 1;
	}
	/*convert digit to intger*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i++] - '0');
	}
	return (sign * result);
}
