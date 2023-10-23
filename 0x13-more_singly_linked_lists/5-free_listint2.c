#include "lists.h"

/**
  * free_listint2 - free the list
  * @head: pointer of type listint_t
  * Return: nothings
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
