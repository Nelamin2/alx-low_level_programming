#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add an alelment to the end of the linked list
 * @head: pointer to the pointer of the first element
 *@n: data
 *return:  the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{ listint_t *ptr;
listint_t *temp;
ptr = malloc(sizeof(listint_t));
ptr->n = n;
if(ptr == NULL)
{return (NULL);
}
ptr->next = NULL;
if(*head == NULL)
{
*head = ptr;
return (ptr);
}
while (temp->next)
temp = temp->next;
temp->next = ptr;
return (ptr);
}

