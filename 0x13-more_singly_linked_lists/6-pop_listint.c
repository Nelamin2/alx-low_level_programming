#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* pop_listint - delete the head node and return the data of it
* @head : pointer to first node
* Return: the data of the deleted element noode
*/

int pop_listint(listint_t **head)
{
int data;
listint_t *tmp;
if (!head || !*head)
return (0);
data = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (data);
}
