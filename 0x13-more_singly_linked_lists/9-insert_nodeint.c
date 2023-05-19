#include "lists.h"


/**
 * insert_nodeint_at_index - inserts_new_node
 * @head: Beginning_node
 * @idx: index_node_is_added
 * @n: data_new_node
 * Author: Perfect 
 * Return: (0) on Success or (1) on Fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *nw;

	listint_t *myself = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);
	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	for (i = 0; myself && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nw->next = myself->next;
			myself->next = nw;
			return (nw);
		}
		else
			myself = myself->next;
	}
	return (NULL);
}

