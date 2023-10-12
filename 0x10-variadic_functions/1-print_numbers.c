#include "variadic_functions.h"

/**
  * print_numbers - print number
  * @separator: separator
  * @n: number of args
  * Return: nothings
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		separator = " ";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
