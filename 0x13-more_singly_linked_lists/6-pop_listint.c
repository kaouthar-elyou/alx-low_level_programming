#include "lists.h"

/**
 * pop_listint - A function deletes the head node of a list.
 * @head: pointer to the first element in the linked list.
 * Return: the data inside the elements that was deleted,
 * Or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tep;
int i;

if (!head || !*head)
return (0);

i = (*head)->n;
tep = (*head)->next;
free(*head);
*head = tep;

return (i);
}
