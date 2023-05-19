#include "lists.h"

/**
 * print_dlistint - dlistint_t list nga printwe ese
 * @h: poyinda ku lisist
 * Return: dzosa ma namba ema nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}
	return (cont);
}
