#include "lists.h"

/**
  * insert_nodeint_at_index - add node in the given position
  * @head: head
  * @idx: the index of the node
  * @n: int
  * Return: the address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev_node = NULL, *next_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	while (next_node && i < idx)
	{
		prev_node = next_node;
		next_node = next_node->next;
		i++;
	}
	/* the length of the list < idx */
	if (!next_node && i < idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!prev_node)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev_node->next = new;
	new->next = next_node;

	return (new);
}
