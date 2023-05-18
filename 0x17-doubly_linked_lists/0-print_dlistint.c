#include "lists.h"

/**
 * print_dlistint - Prints the data
 * stored in a doubly linked list
 *
 * @h: head of thr doubly linked list
 *
 * Return: length of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int len = 0;

	temp = h


	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}
	return (len);
}
