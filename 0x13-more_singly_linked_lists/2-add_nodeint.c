#include "lists.h"


/**
 * add_nodeint - new node 
 * @head: first_node in the list
 * @n: data to insert in that new node
 *
 * Return: (0) on Success and (1) fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));

	if (!nw)
		return (NULL);
	nw->n = n;

	nw->next = *head;

	*head = nw;

	return (nw);
}

