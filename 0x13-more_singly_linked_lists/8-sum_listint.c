#include "lists.h"


/**
 * sum_listint - kuverenga zvese in a listint_t list
 * @head: Rekutanga_node
 * Author: Perfect
 * Task 8
 * Return: (0) on Success or (1) on Fail
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
