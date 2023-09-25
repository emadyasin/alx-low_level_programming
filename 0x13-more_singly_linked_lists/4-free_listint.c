#include "lists.h"

/**
 * free_listint - frees the momory occupied by
 * each node in a listint_t linked list.
 * @head: Pointer to the head node of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
