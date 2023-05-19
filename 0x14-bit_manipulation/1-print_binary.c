#include "main.h"

/**
 * print_binary - print  binary equivalent to  decimal
 * @num: number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int num)
{
	int p, count = 0;

	unsigned long int now;

	for (p = 63; p >= 0; p--)
	{
		now = num >> p;
		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

