#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_node - adds a new node at the beginning of a list_t lis
*@str:string to the first node
*@head:pointer to the first nide
*Return: The address of the new element or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{list_t *node;
unsigned int i = 0;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
while (str[i])
i++;
node->len = i;
node->next = *head;
*head = node;
return (*head);
}
