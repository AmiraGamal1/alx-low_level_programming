#include "lists.h"

/**
  * delete_nodeint_at_index - delete node
  * @head: the head
  * @index: index of node to delete
  * Return: 1 (success) -1 (fail)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (tmp && i < index)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	if (prev == NULL)
	{
		*head = tmp->next;
		free(tmp);

		return (1);
	}
	prev->next = tmp->next;
	free(tmp);

	return (1);
}
