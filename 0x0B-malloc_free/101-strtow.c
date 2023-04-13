#include "main.h"
#include <stdlib.h>
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
	int i, j, k = 0;
	int how_words = 0, len_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			how_words++;
	}
	array_words = malloc((how_words + 1) * sizeof(char *));
	if (array_words == NULL)
		return (NULL);
/* i counter to keep track of the number of words that have been extracted*/
	for (i = 0; i < how_words; i++)
	{
/* find the start of the next word by skipping over any ' ' in the string.*/
		while (str[k] == ' ')
			k++;
		/*find the end of the current word.*/
		for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
			;
		len_word = j - k;
		array_words[i] = malloc((len_word + 1) * sizeof(char));
		if (array_words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array_words[j]);
			free(array_words);
			return (NULL);
		}
/*Each element of this array should contain a single word, \0 */
		_strncpy(array_words[i], &str[k], len_word);
		array_words[i][len_word] = '\0';
		k = j;
	}
	/* add a NULL terminator to the array*/
	array_words[how_words] = NULL;
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
