#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: prefix substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int len_s = strlen(s);
	int len_accept = strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == len_accept)
			return (count);
	}
	return (count);
}
