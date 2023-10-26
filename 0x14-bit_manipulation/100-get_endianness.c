#include "main.h"

/**
  * get_endianness - check if system is a little endian or big
  * Return: 0 if big 1 if little
  */
int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;

	if (*p == 1)
		return (1);
	else
		return (0);
}
