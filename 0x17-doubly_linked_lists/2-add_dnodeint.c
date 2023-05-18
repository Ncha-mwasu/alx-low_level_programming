#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a DLL
 * @head: head of the DLL
 * @n: data stored in the added node
 *
 * Return: head of the DLL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		(*head) = new_node;

		return (*head);
	}
}
