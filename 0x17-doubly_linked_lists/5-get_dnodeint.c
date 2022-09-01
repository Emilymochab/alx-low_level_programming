#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: head pointer of a doubly linked list.
 * @index: index of the node, starting from 0.
 * Return: the correspondent node or NULL if doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head != NULL)
	{
		if (node == index)
			return (head);

		head = head->next;
		node++;
	}
	return (NULL);
}
