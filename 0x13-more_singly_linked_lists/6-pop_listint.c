#include "lists.h"

/**
 * pop_listint - deletes the head of a node of listint_t
 * @head: head reference.
 *
 * Return: head node data if successful, 0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if ((*head) == NULL)
	{
		return (0);
	}

	else
	{
		data = (*head)->n;
		node = (*head)->next;
		free(*head);
		(*head) = node;
		return (data);
	}
}
