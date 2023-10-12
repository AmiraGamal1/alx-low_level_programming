#include "variadic_functions.h"

/**
  * print_all - print whatever type it receive
  * @format: format of arg to print
  * Return: nothings
  */
void print_all(const char * const format, ...)
{
	unsigned int j;
	char *str, *sep = "";
	va_list args;

	va_start(args, format);

	j = 0;
	if (format)
	{
		while (format[j] != '\0')
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
		printf("\n");
		va_end(args);
	}
}
