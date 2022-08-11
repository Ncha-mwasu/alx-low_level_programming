#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head:first node of the linked list
 * @str: string store in the list
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t q;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);

		for (q = 0; str[q]; q++)
			;

		new_node->len = q;
		new_node->next = *head;
		*head = new_node;

		return (*head);
	}
}
