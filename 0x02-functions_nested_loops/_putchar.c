#include <unistd.h>

/**
* _putchar - wtite a Character C to stdout
* C character to print
*
* Return: 0 (Success)
* On error -1 ir returned, required
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
} 
