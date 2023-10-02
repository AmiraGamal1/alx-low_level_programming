#include <stdio.h>

/**
  * main -Entry point
  * @argc: num of arg
  * @argv: arrgar of string arg
  * Return: Always 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
