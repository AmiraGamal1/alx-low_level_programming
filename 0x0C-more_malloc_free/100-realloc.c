#include "main.h"
#include <stdlib.h>

/**
  * _realloc - resize allocated memor
  * @ptr: pointer to old allocated memory spacey
  * @old_size: old allocated memory in byte
  * @new_size: new allocated memory in byte
  * Return: pointer to allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr, *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	old_ptr = ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	/* if new < old --> shrink space  else --> expand the space*/
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
