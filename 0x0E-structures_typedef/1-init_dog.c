#include "dog.h"

/**
  * init_dog - initalize dog info
  * @d: struct type dog
  * @name: dog name
  * @age: dog age
  * @owner: owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
