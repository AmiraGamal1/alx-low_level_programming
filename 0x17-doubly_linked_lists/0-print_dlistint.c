#include "lists.h"

/**
  * print_dlistint - print the element in the list
  * @h: head
  * Return: number of the node
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size += 1;
	}
	return (size);
}
