#include "lists.h"
/**
 * print_dlistint - prints the content of a doubly linked list.
 * @dlistint_t: the list datatype
 * @h: the head of the list
 *
 * Return: no of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
