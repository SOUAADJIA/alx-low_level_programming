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
	int i, j;
	int len_src = 0;

	while (src[len_src] != '\0')
		len_src++;
	for (i = 0; n > 0; i++)
	{
		for (j = 0; j < len_src - 1; j++)
			dest[i] = src[j];
		n--;
	}
	return (dest);
}
