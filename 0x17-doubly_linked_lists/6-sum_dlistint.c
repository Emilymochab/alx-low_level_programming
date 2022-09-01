#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of the data of a list.
 * @head: head pointer of a doubly linked list.
 * Return: sum of the data or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
