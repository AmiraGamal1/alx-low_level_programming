#include "main.h"

/**
  * binary_to_uint - comvert binary to unsigned int
  * @b: binary number
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i, len = 0, a, base = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	len--;
	for (i = 0; i <= len; i++)
	{
		a = b[len - i] - '0';
		n += a * base;
		base = base * 2;
	}

	return (n);
}
