#include "lists.h"

/**
 * free_listint2 - function  frees a list.
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
listint_t *tep;

if (head == NULL)
return;
while (*head)
{
tep = (*head)->next;
free(*head);
*head = tep;
}
*head = NULL;
}
