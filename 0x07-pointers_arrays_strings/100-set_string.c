#include "main.h"
#include <stdio.h>

/**
  * set_string - set the value of pointer to a char
  * @s: pointer to pointer of char
  * @to: copy to destetions
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
