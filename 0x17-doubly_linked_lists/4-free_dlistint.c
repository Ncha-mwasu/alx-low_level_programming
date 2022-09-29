#include "lists.h"
/**
  * free_dlistint - frees the list dlistint_t
  * @head: head node
  *
  * Return: no return
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;

		free(head);
		head = next;
	}
}
