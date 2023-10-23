#include "lists.h"

/**
  * listint_len - count the length of the linked list
  * @h: the head
  * Return: the length of the linked lists
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
