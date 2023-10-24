#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -insert a node at agiven position
 *@head: pointer to the first element of the linked list
 *@idx: index
 *@n: element data
 * Return: return the adress of the new inserted node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{ unsigned int counter;
listint_t *ptr;
listint_t *new;
ptr = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (counter = 0; ptr && counter < idx; counter++)
{
if (counter == idx - 1)
{
ptr->next = ptr->next;
ptr->next = new;
return (new);
}
else
ptr = ptr->next;
}
return (NULL);
}
