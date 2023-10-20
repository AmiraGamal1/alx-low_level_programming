#include "lists.h"

/**
  * free_list - free the space allocated by the list
  * @head: pointer to the head
  * Return: nothings
  */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
