#include "lists.h"

/**
 * sum_dlistint - eh isa dlistint_t list.
 * @head: poyinda kulisiti
 * Return: sum yedhata rese
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
