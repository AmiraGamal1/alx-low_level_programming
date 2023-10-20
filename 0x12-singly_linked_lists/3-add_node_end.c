#include "lists.h"

/**
  * add_node_end - add nodes
  * @head: pointer to head
  * @str: string
  * Return: the address of the new elemnts or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int i = 0;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/*traverse to find the end*/
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
