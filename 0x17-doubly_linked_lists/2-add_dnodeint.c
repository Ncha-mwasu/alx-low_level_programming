#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: reference to the headnode.
 * @n: data
 *
 * Return: a new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
