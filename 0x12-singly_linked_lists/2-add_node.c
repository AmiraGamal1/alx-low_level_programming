#include "lists.h"

/**
  * add_node - add nodes
  * @head: pointer to head
  * @str: string
  * Return: the address of the new elemnts or NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
