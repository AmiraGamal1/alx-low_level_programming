#include "lists.h"

/**
  * add_nodeint - add new node to list
  * @head: the head
  * @n: int
  * Return: address of the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!head)
	{
		new = *head;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
