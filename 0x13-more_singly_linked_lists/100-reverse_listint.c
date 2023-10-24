#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *past = NULL;
listint_t *next = NULL;
while (*head)
{
lead = (*head)->next;
(*head)->next = prev;
past = *head;
*head = lead;
}
*head = past;
return (*head);
}

