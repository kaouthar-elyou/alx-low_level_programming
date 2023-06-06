#include "lists.h"

/**
 * free_listint - function that frees a  list.
 * @head: listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
listint_t *tep;
while (head)
{
tep = head->next;
free(head);
head = tep;
}
}
