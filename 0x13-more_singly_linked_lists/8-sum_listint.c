#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the integer data cotained in
 * a listint_t linked list.
 * @head: Pointer to the first node of the listint_t list.
 * Return: The sum of all the integer data in the list,
 * or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
