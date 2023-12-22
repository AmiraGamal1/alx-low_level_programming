#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "cool 1");
    hash_table_set(ht, "mentioner", "cool 2");
    hash_table_set(ht, "heliotropes", "cool 11");
    hash_table_set(ht, "neurospora", "cool 22");
    hash_table_set(ht, "depravement", "cool 111");
    hash_table_set(ht, "serafins", "cool 222");
    hash_table_set(ht, "stylist", "cool 1111");
    hash_table_set(ht, "subgenera", "cool 2222");
    hash_table_set(ht, "joyful", "cool 11111");
    hash_table_set(ht, "synaphea", "cool 22222");
    hash_table_set(ht, "redescribed", "cool 111111");
    hash_table_set(ht, "urites", "cool 222222");
    hash_table_set(ht, "dram", "cool 1111111");
    hash_table_set(ht, "vivency", "cool 2222222");
    return (EXIT_SUCCESS);
}
