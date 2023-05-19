#include "lists.h"

/**
 * dlistint_len - dzosa ma linked dlistint_t list.
 * @h: poyinda ku list
 * Return: manamba ema nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}
	return (cont);
}
