#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h:points to first node
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
size_t counter;
counter = 0;
while (h)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}
return (counter);
}

