#include "lists.h"

/**
  * find_listint_loop -  find the loop
  * @head: head
  * Return: start point int the loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (head == NULL)
		return (NULL);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			break;
		}
	}
	if (!(slow && fast && fast->next))
		return (NULL);
	if (slow == fast)
	{
		slow = head;
	}
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
