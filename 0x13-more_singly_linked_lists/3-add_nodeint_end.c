#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add an alelment to the end of the linked list
 * @head: pointer to the pointer of the first element
 *@n: data
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{ listint_t *ptr;
listint_t *temp;
ptr = head;
temp = malloc(sizeof(listint_t));
temp->next = NULL;
temp->n = n;
if (ptr == NULL)
{return (NULL);
}
while (ptr->next != NULL)
{ptr = ptr->next;
}
ptr->next = temp;
return (ptr);
}

