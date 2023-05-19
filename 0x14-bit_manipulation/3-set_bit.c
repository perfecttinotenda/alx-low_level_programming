#include "main.h"


/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @num: point  number
 * @index: index of the bit to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);
	*num = ((1UL << index) | *num);
	return (1);
}
