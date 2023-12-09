#include "lists.h"

/**
  * add_dnodeint_end - add to the end
  * @head: list head
  * @n: value
  * Return: address of new node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/* first node in the list */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
