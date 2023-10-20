#include <stdio.h>
#include <stdlib.h>
#include <lists.h>

/**
*print_list - prints all the elements of a list
*@h: pointer to the list_t list to print
*Return:the number of nodes
*/

size_t print_list(const list_t *h);

{
	size_t count = 0;

while (h)
{
if (!h->str)
{printf("[0] (nil)\n");
return (count);

const list_t *str = h;
while (str != NULL)
{
printf("[%d]: %	s\n", h->length, h->str);
h = h->next;
count++;
}
return (count); }

