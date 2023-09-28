#include "main.h"
#include <stdio.h>

/**
  * count -  count length of string
  * @s: pointer to string
  * Return: length of string
 */
int count(char *s)
{
	if (*s == '\0')
		return (0);
	return (count(s + 1) + 1);
}
/**
  * _palindrome -  check if the string is palindrome
  * @s: pointer to string
  * @i: iteration
  * @l: length of string
  * @mid: int value of the mid of string
  * Return: length of string
  */

int _palindrome(char *s, int l, int mid, int i)
{
	if (i < mid)
	{
		if (*(s + i) != *(s + (l - i - 1)))
			return (0);
		return (_palindrome(s, l, mid, i + 1));
	}
	return (1);
}
/**
  * is_palindrome -  check if the string is pallindrome
  * @s: pointer to string
  * Return: 1 if pallindrome 0 else
 */
int is_palindrome(char *s)
{
	int l;
	int mid;

	if (*s == '\0')
		return (1);
	l = count(s);
	if (l % 2 == 0)
		mid = l / 2;
	else
		mid = l / 2 + 1;
	return (_palindrome(s, l, mid, 0));
}
