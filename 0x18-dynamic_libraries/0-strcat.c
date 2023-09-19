#include "main.h"

/**
 * _strcat - that concatenates two strings.
 *
 * @src: string to append
 *
 * @dest: string destination
 *
 * Return: a pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{

	int i, j, lendest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lendest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[lendest] = src[j];

		lendest++;
	}

	dest[lendest] = '\0';
	return (dest);
}
