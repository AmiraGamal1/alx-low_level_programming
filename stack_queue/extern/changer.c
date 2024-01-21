#include <stdio.h>
#include "globals.h"

int global_var = 20;
void increment()
{
	printf("before increment: %d\n", global_var);
	global_var++;
	printf("after increment: %d\n", global_var);
}
