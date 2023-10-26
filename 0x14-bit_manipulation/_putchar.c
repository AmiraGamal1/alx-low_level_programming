#include "main.h"

/**
  * _putchar - put char to stdout
  * @c: char
  * Return: 1 in success
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
