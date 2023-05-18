#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at a certain index
 *
 * @head: head of the DLL
 * @index: index(postion) of deletion
 *
 * Return: returns 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = *head;
	i = 0;

	if (temp == NULL)
	{
		return (-1);
	}
	while (temp)
	{
		if (i == index)
		{
			if (index == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
				free(temp);
				return (1);
			}
			else
			{
				temp->prev->next = temp->next;
				if (temp != NULL)
				{
					temp->next->prev = temp->next;
				}
				free(temp);
				break;
			}
		}
		temp = temp->next;
		i++;
	}
	return (1);
}
