#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of nodes (elements) in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
