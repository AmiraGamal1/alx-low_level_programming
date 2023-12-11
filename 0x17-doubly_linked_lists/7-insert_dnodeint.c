#include "lists.h"

/**
  * insert_dnodeint_at_index - insert new node at index
  * @h: head
  * @idx: index
  * @n: value
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *h, *new;
	size_t i = 0;

	new->n = n;
	if (idx == 0)
	{

	}
	h = *head;
	while (h && i != idx)
	{
		h = h->next;
		i++;
	}
	if (i != idx)
		return (NULL);



}
