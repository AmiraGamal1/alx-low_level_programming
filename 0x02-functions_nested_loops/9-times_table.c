#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0.
  */
void times_table(void);

int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("0,  %d,  %d,  %d,  %d,  %d,  %d,  %d,  %d,  %d$\n", 
			i, i * 2, i * 3, i * 4, i * 5, i * 6, i * 7, i * 8, i * 9);
	}
}
