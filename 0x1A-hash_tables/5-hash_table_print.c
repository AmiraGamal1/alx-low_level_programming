#include "hash_tables.h"

/**
  * hash_table_print - print the hash table
  * @ht: hash table
  * Return: nothings
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int pre = 0;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (pre == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				pre = 1;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
