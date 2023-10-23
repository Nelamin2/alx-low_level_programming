#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len -  returns  the number of elementd in a linked list
* @h: a pointer to the first element of the linked list
* Return: return the number of the elements
*/
size_t listint_len(const listint_t *h)
{
size_t count;
count = 0;
while (h)
{ count++;
h = h->next;
}
return (count);
}
