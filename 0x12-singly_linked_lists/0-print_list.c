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

if (h == NULL) :
{printf("[0] (nil)\n");
return (count);
}
const list_t *current = h;
while (current != NULL)
{
printf("%s\n", current->str);
current = current->next;
count++;
}
return (count); }

