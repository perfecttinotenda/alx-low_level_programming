#include "lists.h"


/**
 * find_listint_loop - kusvaga ma links mu loop
 * @head: MaLink aka Batanidzwa
 * Author: Perfect
 * Return: 0 on Success or 1 on Fail
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *better = head;

listint_t *best = head;

if (!head)
return (NULL);

while (better && best && best->next)
{
best = best->next->next;

better = better->next;

if (best == better)
{
better = head;

while (better != best)
{
better = better->next;

best = best->next;
}
return (best);
}
}
return (NULL);
}

