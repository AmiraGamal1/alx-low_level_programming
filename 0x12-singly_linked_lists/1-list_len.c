#include "lists.h"

/**
  * list_len - count the number of elements in the linked list
  * @h: linked lists
  * Return: number of elements int the lists
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
