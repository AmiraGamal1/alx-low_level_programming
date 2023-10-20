#include "lists.h"

/**
  * print_list - print the linked list
  * @h: pointer of type list_t
  * Return: number of node
  */
size_t print_list(const list_t *h)
{
	unsigned long int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
