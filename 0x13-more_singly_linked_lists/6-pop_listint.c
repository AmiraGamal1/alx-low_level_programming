#include "lists.h"

/**
  * pop_listint - pop the head
  * @head: head
  * Return: n
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;

	free(tmp);
	return (n);
}
