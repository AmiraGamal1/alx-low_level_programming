#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - stoer copy of name and owner
  * @name: dog name
  * @age: dog age
  * @owner: name of owner
  * Return: pointe of type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int i, l1, l2;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	for (l1 = 0; name[l1] != '\0'; l1++)
		;
	for (l2 = 0; owner[l2] != '\0'; l2++)
		;
	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->owner);
		return (NULL);
	}
	i = 0;
	while (i < l1)
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	i = 0;
	while (i < l2)
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->owner[i] = '\0';
	d->age = age;
	return (d);
}
