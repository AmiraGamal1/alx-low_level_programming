#include "lists.h"

/**
  * free_listint - free the linked list
  * @head: head
  * Return: nothings
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
