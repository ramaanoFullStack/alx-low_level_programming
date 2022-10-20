#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: The list_t list.
*
* Return: The number of nodes in h.
*/

size_t print_list(const list_t *h)
{
int nodes;

for (nodes = 0; h != NULL; nodes++)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%i] %s\n", h->len, h->str);

nodes++;
h = h->next;
}

return (nodes);
}
