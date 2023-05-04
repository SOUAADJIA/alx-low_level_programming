#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - that converts a binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	size_t i, len = _strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec_num += (b[i] - '0') * _pow_recursion(2, len - i - 1);
	}
	return (dec_num);
}

/**
* _strlen - returns the length of a string.
*
* @s: string.
*
* Return: length of string.
*/

int _strlen(const char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * _pow_recursion - function returns the value of x raised to the power of y
 *
 * @x: integer
 * @y: power
 *
 * Return: x power y, if y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	{
		return (x * _pow_recursion(x, y - 1));
	}
}
