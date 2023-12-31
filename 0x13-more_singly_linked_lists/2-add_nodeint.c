#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 *@head: A double pointer to the start of the listint_t list.
 * @n: The integer data to be added to the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
