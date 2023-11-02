#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node or
 *@head: pointer to the first node
 *@index: the index of the nodes
 * Return: the nth node or NULL if it doesn't exit.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{ unsigned int counter;
for (counter = 0; counter < index; counter++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
