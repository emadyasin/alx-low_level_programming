#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end a listint_t list.
 * @head: A double pointer to the first node in the list.
 * @n: The data to insert in the new node.
 *
 * Return: Adress of the new node, or NULL if allocation fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
