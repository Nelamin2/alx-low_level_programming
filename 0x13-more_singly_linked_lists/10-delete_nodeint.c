#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked lis
 * @head: pointer to the first element in the list
 * @index: linked list index
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr;
ptr  = *head;
listint_t *current;
current = NULL;
unsigned int counter;
counter = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(ptr);
return (1);
}
while (counter < index - 1)
{
if (!ptr || !ptr->next)
return (-1);
ptr = ptr->next;
counter++;
}
current = ptr->next;
ptr->next = current->next;
free(current);
return (1);
}
