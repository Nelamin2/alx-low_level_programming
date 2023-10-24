#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free the linked list
 *@head: points to the fisrt element in the linked list
 */

void free_listint(listint_t *head)
{ listint_t *ptr;
while (head)
{ptr = ptr->next;
free(head);
head = ptr;
}
}
