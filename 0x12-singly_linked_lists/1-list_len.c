#include <stdlib.h>
#include "lists.h"


/**
 * list_len - The Number of Elements linked list
 * @h: Pointer to list_t lists
 *
 * Return: h
 */

size_t list_len(const list_t *h)

{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);

}
