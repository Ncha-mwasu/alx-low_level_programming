#include "lists.h"
/**
 * dlistint_len - Calculates the length of a DLL
 *
 * @h: the head of a DLL
 *
 * Return: rThe length of a DLL
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int len;

	temp = h;
	len = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
