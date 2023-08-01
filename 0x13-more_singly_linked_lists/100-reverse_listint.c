#include "lists.h"


/**
 * reverse_listint - reverse_listint
 * @head: first node in the list.
 *
 * Return: Pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)

{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);

}
