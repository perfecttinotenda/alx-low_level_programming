#include "lists.h"


/**2
 * listint_len - returns the number of elements in a linked l  * @h: linked listint_t 
 * Task 1
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;

		h = h->next;
	}

	return (nodes);
}

