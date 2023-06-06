#include "lists.h"

/**
 * sum_listint - function calculates the sum of all the data in a linked list.
 * @head: first node in the linked list.
 * Return: resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tep = head;

	while (tep)
	{
		sum += tep->n;
		tep = tep->next;
	}
	return (sum);
}
