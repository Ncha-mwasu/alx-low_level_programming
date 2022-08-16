#include "lists.h"

/**
 * listint_len - function returning the number of elements in list_t list.
 * @h: head of the linked list.
 *
 * Return: number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
