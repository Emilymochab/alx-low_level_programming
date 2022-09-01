#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: head pointer of a doubly linked list.
 * @n: data part of the new node.
 * Return: address of new element or NULL if fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		new->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new;
		*head =	new;

		return (new);
	}
	return (NULL);
}
