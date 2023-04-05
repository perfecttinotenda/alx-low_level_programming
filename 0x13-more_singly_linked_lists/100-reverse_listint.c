#include "lists.h"


/**
 * reverse_listint - reverses_list
 * @head: Ngayi tarise_to_first_node
 * Author: Perfect
 * Task 100
 * Return: (0) on Success or (1) on Fail
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *preview = NULL;

listint_t *following = NULL;

while (*head)
{
following = (*head)->following;

(*head)->following = preview;

preview = *head;

*head = following;
}

*head = preview;

return (*head);
}

