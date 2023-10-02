#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: num of arg
  * @argv: array of string
  * Return: 0 if success 1 else
  */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
