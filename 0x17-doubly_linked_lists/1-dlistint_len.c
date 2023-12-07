#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len-  returns the number of elements in a linked list.
 *@h: pointeto the first node
 * Return: the number of element of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
int i;
i = 0;
if (h == NULL)
return (i);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
