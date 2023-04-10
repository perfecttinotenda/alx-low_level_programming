#include "main.h"


/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * to get from one number to another
 * @num: 1st number
 * @may: 2sec number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int num, unsigned long int may)
{
	int num, read = 0;

        unsigned long int now;

        unsigned long int exclusive = num ^ may;

	for (num = 63; num >= 0; num--)
	{
		now = exclusive >> num;
		if (now & 1)
			read++;
	}

	return (read);
}

