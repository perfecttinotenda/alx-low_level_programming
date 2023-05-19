#include <stdio.h>
#include "main.h"

/**
 * main - is the main file
 *
 * Return: Something here
 */

int main(void)
{
int n;

n = get_endianness();
if (n != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}
