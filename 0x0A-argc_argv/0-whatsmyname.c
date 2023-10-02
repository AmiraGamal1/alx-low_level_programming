#include <stdio.h>

/**
  * main - Entry point
  * @argc: num of arg
  * @argv: array of string of arg
  * Return: always 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
