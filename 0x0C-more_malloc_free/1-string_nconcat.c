#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenates from s2
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1_len, s2_len, copy_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		copy_len = s2_len;
	else
		copy_len = n;

	s3 = malloc((s1_len + copy_len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	_memcpy(s3, s1, s1_len);
	_memcpy(s3 + s1_len, s2, copy_len);
	s3[s1_len + copy_len] = '\0';
	return (s3);
}
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
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
/**
* _strlen - returns the length of a string.
*
* @s: string.
*
* Return: length of string.
*/

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
