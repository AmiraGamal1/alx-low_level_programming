#include "lists.h"

/**
  * sum_listint - sum the n value of all list
  * @head: head
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
