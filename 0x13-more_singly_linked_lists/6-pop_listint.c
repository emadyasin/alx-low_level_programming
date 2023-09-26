#include "lists.h"

/**
 * pop_listint - Delets the head node of a listint_t linked list
 * and returns the data within the deleted node.
 * @head: Double pointer to teh start of the listint_t list.
 * Return: The integer data from the deleted node
 * or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
