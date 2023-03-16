#include <unistd.h>

/**
 * _putchar - writes a character
 * @c: the character to print when called
 *
 * Return: 0 (ON succes)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
