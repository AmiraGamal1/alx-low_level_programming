#include "lists.h"

/**
  * print_listint - list all int in the linked list
  * @h: head of the linked lists
  * Return: unsigned int =
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
