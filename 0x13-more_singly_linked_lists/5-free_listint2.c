#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free the linked list
 *@head: points to the fisrt element in the linked list
 */

void free_listint2(listint_t **head)
{ listint_t *ptr;
while (*head)
{ptr = (*head)->next;
free(*head);
*head = ptr;
}
*head =  NULL;
}
