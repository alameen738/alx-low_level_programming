#include "lists.h"


/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: First node.
 * @index: Index of node.
 *
 * Return: Pointer to node, or null.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
unsigned int a = 0;
listint_t *temp = head;
while (temp && a < index)
{
temp = temp->next;
a++;
}

return (temp ? temp : NULL);

}
