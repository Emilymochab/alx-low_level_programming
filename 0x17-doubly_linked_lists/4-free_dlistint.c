#include "lists.h"

/**
 * free_dlistint - function frees a dlistint_t list.
 * @head: head pointer of a doubly linked list.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
