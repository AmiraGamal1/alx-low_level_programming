#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - print a name
  * @name: pointer to name
  * @f: pointer to function
  * Return: nothings
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
