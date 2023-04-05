#include "lists.h"


/**
 * free_listint - free linked list
 * @head: listint_t-list
 * Task 4
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
