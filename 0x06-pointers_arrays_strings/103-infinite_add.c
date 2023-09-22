#include "main.h"

/**
  * revese - reverse the array of char
  * @r: string
  * @n: size of strings
  */
void reverse(char *r, int n)
{
	int i, mid;
	char tmp;

	if (n % 2 == 0)
		mid = n / 2;
	else
		mid = (n + 1) / 2;
	for (i = 0; i < mid; i++)
	{
		tmp = *(r + i);
		*(r + i) = *(r + n - i - 1);
		*(r + n - i - 1) = tmp;
	}
}
/** 
  * infinite_add - big numbeer addition
  * @n1: pointer to char
  * @n2: pointer to char
  * @r buffer
  * @size_r: buffer size
  * Return: pointer to char
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	int overflow = 0, digits = 0, digit_sum = 0;
	int d1 = 0, d2 = 0;

	/*count the number of digits on n1 and n2*/
	i = 0;
	while (*(n1 + i) != '\0')
		i++;
	j = 0;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	/* sum the n1 and n2 digits if there are space in the buffer*/
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || overflow == 1)
	{
		/* check if there is digit not add if yes convert it to int*/
		/* else give set to 0; e.g. 7659 + 0099*/
		/* this funcution run in liner time according to number of digits*/
		if (i < 0)
			d1 = 0;
		else
			d1 = *(n1 + i) - '0';
		if (j < 0)
			d2 = 0;
		else
			d2 = *(n2 + j) - '0';
		/*add digits */
		digit_sum = d1 + d2 + overflow;
		if (digit_sum >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (digit_sum % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse(r, digits - 1);
	return (r);
}
