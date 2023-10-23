#include "lists.h"

/**
  * add_nodeint_end - add new node to the end
  * @head: head
  * @n: int
  * Return: address of new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		/* traverse to the end of the list */
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new;
	}

	return (new);
}
