#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a linked list
* @head: double pointer to the list_t list
* @str: string to put in the new node
* Return: address of the new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *tmp;
unsigned int i = 0;
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
while (str[i])
i++;
newnode->len = i;
newnode->next = NULL;
tmp = *head;
if (tmp == NULL)
{
*head = newnode;
return (newnode);
}
while (tmp->next)
{tmp = tmp->next;

tmp->next = newnode;
}
return (newnode);
}

