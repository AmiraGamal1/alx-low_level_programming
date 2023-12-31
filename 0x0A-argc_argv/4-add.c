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
	int i, j, k, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num > 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
