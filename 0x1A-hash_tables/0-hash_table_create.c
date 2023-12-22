#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_create - create a new hash table
 *
 * @size: the size of the HashTable
 * Return: a pointer of the newly created HashTable
 * or a NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;
unsigned long counter;
new_table = malloc(sizeof(hash_table_t));
if (!new_table)
return (NULL);
new_table->size = size;
new_table->counter = 0;
new_table->array = malloc(sizeof(hash_node_t *) * size);
if (!new_table->array)
return (NULL);
for (counter = 0; counter < size; counter++)
new_table->array[counter] = NULL;
return (new_table);
}
