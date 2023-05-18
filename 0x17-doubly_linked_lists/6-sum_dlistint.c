#include "lists.h"
/**
 * sum_dlistint - sums the data stored in a DLL
 * @head: Head of the doubly linked list
 *
 * Return: Sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	temp = head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->next;
		}

		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
