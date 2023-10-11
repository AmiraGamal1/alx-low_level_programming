#include "3-calc.h"

/**
  * main - Entry point
  * @argc: number of argument
  * @argv: array of argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int a, b;
	int (*oper)(int, int);
	char o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oper = get_op_func(argv[2]);
	if (!oper)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];
	if (b == 0 && (o == '/' || o  == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oper(a, b));

	return (0);
}
