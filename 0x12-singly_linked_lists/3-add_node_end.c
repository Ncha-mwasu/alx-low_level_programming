#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: first node in the linked list.
 * @str: stores the list.
 *
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	size_t q;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	for (q = 0; str[q]; q++)
		;

	new_node->len = q;
	new_node->next = NULL;
	last_node = *head;

	if (last_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (*head);
}

