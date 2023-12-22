#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - check the code
 *@key: string of key
 *@size: strring of size
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key,
unsigned long int size);
{
return (hash_djb2(key) % size);
}

