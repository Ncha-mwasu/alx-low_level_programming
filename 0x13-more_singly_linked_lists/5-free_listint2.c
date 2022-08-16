#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: first pointer in the list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	
	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
