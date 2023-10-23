#include "lists.h"

/**
  * get_nodeint_at_index - find the index of the nth node
  * @head: head
  * @index: the index of the node
  * Return: node or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
