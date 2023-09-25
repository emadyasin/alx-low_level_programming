#include "lists.h"

/**
 * free_listint2 - frees the momory accopied by each node in a listint_t
 * linked list and sets the head to NULL.
 * @head: Double pointer to the head node of the listint_t to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
