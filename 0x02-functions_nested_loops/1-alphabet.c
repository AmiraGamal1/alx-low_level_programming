#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0(Success)
 */
void print_alphabet(void);

int  main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	/**
	  * print_alphabet - print alphabets in lowercase
	  *
	  * Return: no reurn value
	  */
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
