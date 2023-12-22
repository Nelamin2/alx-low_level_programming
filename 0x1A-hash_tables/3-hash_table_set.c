#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - insert a new pair to the HashTable
 *@key: string of key
 *@value: string ofn a value
 *@ht: pointer to the array of pointers
 * Return: a pointer to the newly added node.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_pair;
hash_node_t *current;
if (!ht || !key || !value)
return (0);
index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];
while (current)
{
if (strcmp(ht->array[index]->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (!current->value)
return (0);
return (1);
}
current = current->next;
}
new_pair = malloc(sizeof(hash_node_t));
if (!new_pair)
{
return (0);
}
new_pair->key = strdup(key);
if (new_pair->key == NULL)
{
free(new_pair);
return (0); }
new_pair->value = strdup(value);
if (new_pair->value  == NULL)
{
free(new_pair->key);
free(new_pair);
return (0); }
new_pair->next = ht->array[index];
ht->array[index] = new_pair;
return (1); }
