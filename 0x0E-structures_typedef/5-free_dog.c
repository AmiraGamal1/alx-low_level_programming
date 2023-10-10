#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free space allocated by dog_t
  * @d: got_t type
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if(d->owner)
		free(d->owner);
	free(d);
}
