#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: string
 *
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 && *p2 && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return (haystack);
		haystack++;

	}
	return (0);

}
