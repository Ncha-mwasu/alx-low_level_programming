#include "lists.h"
/**
 * free_dlistint - frees nodes of a doubly
 * linked list
 *
 * @head: Head of the DLL
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
