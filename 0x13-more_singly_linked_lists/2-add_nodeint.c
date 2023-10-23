#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add element at the begining of the list
 * @head: pointer to the start of the list
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{ listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (!ptr)
return (NULL);
ptr->link = head;
head = ptr;
return (head);
}
