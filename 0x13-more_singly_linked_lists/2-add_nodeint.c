#include "lists.h"
/**
 * add_nodeint - add new node at the beginning.
 * @head: pointers to first node.
 * @n: given integers
 *
 *Return: Null or new_node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
