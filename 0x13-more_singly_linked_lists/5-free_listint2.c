#include "lists.h"


/**
 * free_listint2 - frees_linked-list
 * @head: listint_t-list
 * Task 5
 * Author: Perfect
 * Return: (0) on Success or (1) on fail
 */

void free_listint2(listint_t **head)
{
	listint_t *myself;

	if (head == NULL)
		return;

	while (*head)
	{
		myself = (*head)->next;
		free(*head);
		*head = myself;
	}
	*head = NULL;
}

