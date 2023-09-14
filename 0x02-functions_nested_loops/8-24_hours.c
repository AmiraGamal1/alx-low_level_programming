#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0.
  */
void jack_bauer(void);

int main(void)
{
	jack_bauer();
	return (0);
}

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10 && j < 10)
				printf("0%d:0%d\n", i, j);
			if (i < 10 && j > 9)
				printf("%d:%d\n", i, j);
			if (i > 9 && j < 10)
				printf("%d:0%d\n", i, j);
			if (i > 9 && j > 9)
				printf("%d:%d\n",i ,j);
		}
	}
}
