#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - return the sum of all the elementts
 *@head: points to first element in the linked list
 * Return: the sum of all elements
 */

int sum_listint(listint_t *head)
{ int sum;
listint_t *ptr = head;
while (ptr)
{sum = ptr->n;
ptr = ptr->next;
}
return (sum);
}
