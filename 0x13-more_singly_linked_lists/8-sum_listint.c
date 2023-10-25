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
{ int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{sum+= head->n;
head = head->next;
}
return (sum);
}
