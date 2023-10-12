#include "variadic_functions.h"

/**
  * print_all - print whatever type it receive
  * @format: format of arg to print
  * Return: nothings
  */
void print_all(const char * const format, ...)
{
	unsigned int j;
	char *sep = "";
	va_list args;

	va_start(args, format);

	j = 0;
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
				if (!(va_arg(args, char *)))
				{
					printf("(nil)%s", sep);
					break;
				}
				printf("%s%s", sep, va_arg(args, char *));
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j++;
	}
	va_end(args);
	printf("\n");
}
