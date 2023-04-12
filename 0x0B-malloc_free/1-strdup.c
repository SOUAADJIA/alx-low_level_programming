#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.Memory
 * for the new string is obtained with malloc, and can be freed with free.
 * @str: string to be copied
 *
 * Return: Returns NULL if str = NULL. Or on success, a pointer to the
 * duplicated string. or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	size_t len_copy;
	char *copy;

	if (str == NULL)
		return (NULL);
	len_copy = strlen(str) + 1;
	copy = malloc(len_copy * sizeof(char));
	if (copy == NULL)
		return (NULL);
	memcpy(copy, str, len_copy);
	return (copy);
}
