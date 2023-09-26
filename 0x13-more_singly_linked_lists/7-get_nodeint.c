#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a specified inde in
 * a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Yhe index of the node to be retrieved, where index
 * starts from 0.
 * Return: Pointer to the node located at the specified index,
 * or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
