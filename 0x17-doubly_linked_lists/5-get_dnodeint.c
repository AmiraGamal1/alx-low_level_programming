#include "lists.h"

/**
  * get_dnodeint_at_index - get node at the index
  * @head: head
  * @index: index of the node
  * Return: address of the node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head && i != index)
	{
		head = head->next;
		i++;
	}
	if (!head)
		return (NULL);
	return (head);
}
