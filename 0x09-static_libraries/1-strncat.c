#include "main.h"

/**
 * _strncat - that concatenates n bytes from src to dest.
 *
 * @src: string to append from
 *
 * @n: bytes to concatenate from src
 *
 * @dest: string destination
 *
 * Return: a pointer to the resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	int lendest = 0;

	while (dest[i] != '\0')
		i++;
	lendest = i;

	while (src[j] != '\0' && j < n)
	{
		dest[lendest] = src[j];
		lendest++;
		j++;
	}
	dest[lendest] = '\0';
	return (dest);
}
