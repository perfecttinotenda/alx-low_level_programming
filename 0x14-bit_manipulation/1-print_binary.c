#include "main.h"


/**
 * print_binary - print  binary equivalent to  decimal
 * @n: number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int p, count = 0;

        unsigned long int now;

	for (p = 63; p >= 0; p--)
	{
		new = n >> p;
		if (current & 1)
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

