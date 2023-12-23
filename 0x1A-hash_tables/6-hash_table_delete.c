#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *head;
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
head = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = head;
}
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
