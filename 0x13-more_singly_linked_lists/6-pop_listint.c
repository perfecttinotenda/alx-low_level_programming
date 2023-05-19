#include "lists.h"


/**
 * pop_listint - head_node
 * @head: first_element
 * Task 6
 * Author: Perfect
 * Return: (0) on Success or (1) on fail
 */

int pop_listint(listint_t **head)
{
	listint_t *myself;

	int digit;

	if (!head || !*head)
		return (0);
	digit= (*head)->n;
	myself = (*head)->next;

	free(*head);
	*head = myself;

	return (digit);
}

