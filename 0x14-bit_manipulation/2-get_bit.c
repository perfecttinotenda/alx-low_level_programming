
#include "main.h"


/**
 * get_bit - returns the value of a bit at index in decimal number
 * @num: number search
 * @index: index of the bit
 *
 * Return: the value of a bit at a given index.
 */

int get_bit(unsigned long int num, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);
	bit_num = (num >> index) & 1;

	return (bit_num);
}
