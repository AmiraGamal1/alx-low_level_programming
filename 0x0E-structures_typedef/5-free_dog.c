#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free space allocated by dog_t
  * @d: got_t type
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
