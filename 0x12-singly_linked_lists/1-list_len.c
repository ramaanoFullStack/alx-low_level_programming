#include "lists.h"

/**
* list_len - Start program
* @h: The linked list_t list.
* @elements: a counter var for size_t (nodes)
*
* Return: The number of elements in h.
*/
size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}

return (elements);
}
