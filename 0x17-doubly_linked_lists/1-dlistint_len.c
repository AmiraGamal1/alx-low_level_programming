#include "lists.h"

/**
  * dlistint_len - find the length of the linked list
  * @h: the head
  * Return: the length
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
