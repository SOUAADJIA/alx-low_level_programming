#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointer
 *
 * @n: number of bytes to be filled
 *
 * @b: constant byte to fill with
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	
	return (s);
}
