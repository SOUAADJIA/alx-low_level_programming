#include "main.h"
#include <stdlib.h>
/**
 * argstostr - that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of strings(arguments)
 * Return: NULL if ac == 0 or av == NULL
 * or a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int len, sum_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
		sum_len += len;
	}
	str = malloc(sum_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
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
