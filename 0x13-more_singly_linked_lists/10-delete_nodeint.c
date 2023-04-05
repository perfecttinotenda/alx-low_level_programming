#include "lists.h"

/**
 * delete_nodeint_at_index - deletes_a_node
 * @head: pointer_first
 * @index: index_node_delete
 * Task 10 Deletion
 * Return: (0) on Success or (0) Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *myself = *head;

listint_t *metoo = NULL;

unsigned int i = 0;


if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(myself);
return (1);
}
while (i < index - 1)
{
if (!myself || !(myself->next))
return (-1);
myself = myself->next;
i++;
}

metoo = myself->next;
myself->next = metoo->next;

free(metoo);
return (1);
}
