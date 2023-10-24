#include "lists.h"

/**
  * print_listint_safe - safe print by detect loop
  * @head: the head
  * Return: the number of node in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head, *slow = head, *tmp = head;
	size_t i = 0;
	int flag = 0;

	if (head == NULL)
		exit(98);
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		slow = slow->next;
		tmp = tmp->next;
		fast = fast->next->next;
		i++;
		if (slow == fast)
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		/* if there is no loop */
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
			i++;
		}
		return (i);
	}
	if (slow == fast)
	{
		slow = head;
	}
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	while (tmp != slow)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
	}
	printf("-> [%p] %d\n", (void *)tmp, tmp->n);
	return (i);
}
