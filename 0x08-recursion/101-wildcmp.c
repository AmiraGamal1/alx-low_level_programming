#include "main.h"
#include <stdio.h>

/**
  * wildcmp - check if two string is equal
  * @s1: string 1
  * @s2: string 2
  * Return: 1 if equal 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
	/* if s1 and  s2  == end of string --> match*/
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	/* if s2 == * and s2 + 1 != end of string */
	/* and s1 == end of string --> not match*/
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	/* if s1 == s2 advance search */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
