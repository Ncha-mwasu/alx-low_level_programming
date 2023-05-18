#include "lists.h"
/**
 * get_dnodeint_at_index - Takes a node at a certain index
 * @head: Head of the list
 * @index: The index at which the noe is taken
 *
 * Return: The node at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t  *temp;
	unsigned int i = 0;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		if (i == index)
		{
			break;
		}
		temp = temp->next;
		i++;
	}
	return (temp);
}
