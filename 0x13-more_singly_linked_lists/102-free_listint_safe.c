#include "lists.h"


/**
 * free_listint_safe - Ma Horror Baba
 * @h: zvaka rwma pa Pointer iri kubuda
 * Author: Perfect
 * Pakaipa ma1
 * Return: (0) Kana Pakanaka or (1) kana pakaipa
 */

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;

int diff;

listint_t *myself;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;

if (diff > 0)
{
myself = (*h)->next;
free(*h);
*h = myself;
len++;
}
else
{
free(*h);

*h = NULL;
len++;

break;
}
}
*h = NULL;

return (len);
}
