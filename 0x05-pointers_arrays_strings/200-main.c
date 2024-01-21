nclude <stdio.h>

int _atoi(char *);

int main(void)
{
	int n;

	n = _atoi("-2147483648");
	printf("%d\n", n);
	return (0);
}
