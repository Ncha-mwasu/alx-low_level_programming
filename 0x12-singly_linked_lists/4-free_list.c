#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: first node in the list.
 *
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *last_node;

	while ((last_node = head) != NULL)
	{
		head = head->next;
		free(last_node->str);
		free(last_node);

	}

}
