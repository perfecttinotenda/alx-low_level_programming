#include "main.h"


/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int p;

	unsigned int my_value = 0;

	if (!b)
		return (0);
	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		my_value = 2 * my_value + (b[p] - '0');
	}
	return (my_value);
}

