#include "lists.h"

/**
  * free_listint_safe - free the list
  * @h: head
  * Return: size of the list
  */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int d;
	listint_t *tmp;

	if (!(*h))
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;

	return (i);
}
