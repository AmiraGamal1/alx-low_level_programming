#include "hash_tables.h"

/**
  * hash_table_set - add element to the hash table
  *
  * @ht: hash table
  *
  * @value: value
  *
  * @key: key
  *
  * Return: 1 if success 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;
	char *dup_value, *dup_key;

	if (key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	/* update the value of existing key */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			free(tmp->value);
			tmp->value = dup_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	dup_key = strdup(key);
	if (dup_key == NULL)
	{
		free(new_node);
		free(dup_value);
		return (0);
	}
	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
