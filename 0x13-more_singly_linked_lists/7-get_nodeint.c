#include "lists.h"


/**
 * get_nodeint_at_index - index_linked
 * @head: Beginning_node 
 * @index: node_return
 * Author: Perfect
 * Task 7
 * Return: (0) on Success or (1) on Fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *myself = head;

	while (myself && i < index)
	{
		myself = myself->next;
		i++;
	}

	return (myself ? myself : NULL);
}

