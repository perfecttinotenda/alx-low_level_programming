#include "lists.h"

/**
 * add_dnodeint - isa node nyowani pakutanga
 * @head: poyinda iri mulisit
 * @n: int irimu new node.
 * Return:pane Addresssi
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
