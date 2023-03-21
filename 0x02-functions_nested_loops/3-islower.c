#include "main.h"
/**
 * _islower - checks for lowercase character c
 *
 * @c: the character in the ASCII code
 *
 * Return: 1 if c is lowercase / Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
