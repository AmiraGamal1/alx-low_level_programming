#include <stdio.h>
#include "changer.c"

int main()
{
	printf("Global variable: %d\n", global_var);
	increment();
	global_var++;
	increment();
	return 0;
}
