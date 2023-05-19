#include "lists.h"

/**
 * insert_dnodeint_at_index - isa nodhi
 * @h: poyinda iya iya
 * @idx: pakugara node
 * @n: zvinga reri nyowani
 * Return: Dzosa Addr
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_node = *h, *new_node;
	unsigned int index, cont = 0;

	/* gadzira iri  node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* border kesi yeku isa peku tanga */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	/* search of position yepari kudiwa */
	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* general kesi iripo */
	if (cont == index && aux_node)
	{
		new_node->prev = aux_node;
		new_node->next = aux_node->next;
		if (aux_node->next)
			aux_node->next->prev = new_node;
		aux_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
