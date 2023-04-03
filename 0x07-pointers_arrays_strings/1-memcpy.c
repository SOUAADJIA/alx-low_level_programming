#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: number bytes to copy
 * Return: apointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
}
