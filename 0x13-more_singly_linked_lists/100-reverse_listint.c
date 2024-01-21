#include "lists.h"

/**
  * reverse_listint - reverse the linked list
  * @head: the head
  * Return: pointer the head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = *head, *pre_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = next_node;
	}
	*head = pre_node;

	return (*head);
}
