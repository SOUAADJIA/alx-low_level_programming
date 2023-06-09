#include "main.h"
#include <stdlib.h>

/**
 * how_words - calculate how many words in string
 * @str: our string
 *
 * Return: how many words in the string
 */
int how_words(char *str)
{
	int i, a = 0;
	int count_words = 0;

	if (str[0] != ' ')
		a = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			a = 1;
		if (str[i] != ' ' && a == 1)
		{
			a = 0;
			count_words++;
		}
	}
	return (count_words);
}
/**
 * strtow - function that splits a string into words.
 * @str: tring tosplit
 * Return: returns a pointer to an array of strings (words)
 * Or NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
char **strtow(char *str)
{
	char **array_words;
	int i, j, k = 0, len_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	if (how_words(str) == 0)
		return (NULL);
	array_words = malloc((how_words(str) + 1) * sizeof(char *));
	if (array_words == NULL)
		return (NULL);
	for (i = 0; i < how_words(str); i++)
	{
		while (str[k] == ' ')
			k++;
		for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
			;
		len_word = j - k;
		array_words[i] = malloc((len_word + 1) * sizeof(char));
		if (array_words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array_words[i]);
			free(array_words);
			return (NULL);
		}
		_strncpy(array_words[i], &str[k], len_word);
		array_words[i][len_word] = '\0';
		k = j;
	}
	array_words[how_words(str)] = NULL;
	return (array_words);
}

/**
 * _strncpy - copy a string
 *
 * @dest: string
 * @src: string
 * @n: bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
