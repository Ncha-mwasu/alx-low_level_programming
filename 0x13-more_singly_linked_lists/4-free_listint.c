#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *last_node;

	while (head != NULL)
	{
		last_node = head->next;
		free(head);
		head = last_node;
	}
}
