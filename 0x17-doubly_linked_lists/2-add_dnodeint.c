#include "lists.h"

/**
  * add_dnodeint - add new node
  * @head: head
  * @n: int
  * Return: the address of the new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	h = *head;
	new->n = n;
	new->next = h;
	new->prev = NULL;
	if (h != NULL)
		h->prev = new;
	*head = new;

	return (new);
}
