#include "lists.h"

/**
 * get_dnodeint_at_index - rnode ngayi dzoswe ye dlistint_t linked list.
 * @head: poyinda kune ksisit
 * @index: zvodiwa
 * Return: dzosa zviri kudiwa
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
