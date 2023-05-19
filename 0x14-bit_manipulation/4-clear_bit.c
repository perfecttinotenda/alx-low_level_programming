#include "main.h"


/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @num: pointer number
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num = (~(1UL << index) & *num);
	return (1);
}
