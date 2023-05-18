#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 * @h: head of the DLL
 * @idx: index (point) of insertion
 * @n: data stored in the nodes
 * Return: address of inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	temp = *h;
	i = 0;
	new_node = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = (add_dnodeint(&temp, n));
	}
	else
	{
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new_node = add_dnodeint_end(&temp, n)
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node == NULL)
						return (NULL);
					new_node->n = n;
					new_node->next = temp->next;
					temp->next->prev = new_node;
					temp->next = new_node;
				}
				break;
			}
			temp = temp->next;
			i++;
		}
	}
	return (new_node);
}
