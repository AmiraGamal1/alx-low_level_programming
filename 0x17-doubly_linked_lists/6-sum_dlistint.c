#include "lists.h"

/**
  * sum_dlistint - sum of all n's
  * @head: head
  * Return: the sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
