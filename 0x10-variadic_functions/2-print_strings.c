#include "variadic_functions.h"

/**
  * print_strings - print a string
  * @separator: separator between strings
  * @n: number of arg
  * Return: nothigs
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *arg;

	if (separator == NULL)
		separator = " ";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg == NULL)
			arg = "(nil)";
		if (i != n - 1)
			printf("%s%s", arg, separator);
		else
			printf("%s", arg);
	}
	printf("\n");
}
