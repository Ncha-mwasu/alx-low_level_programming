#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end of
 * a doubly linked list
 *
 * @head: Head of the DLL
 * @n: data in the node
 *
 * Return: the modified list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *last_node;

	last_node = malloc(sizeof(dlistint_t));
	temp = *head;
	last_node->next = NULL;

	if (last_node == NULL)
	{
		return (NULL);
	}

		last_node->n = n;
	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
		return (*head);
	}

	else
	{
		while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = last_node;
		last_node->prev = temp;
		return (*head);
	}
}
