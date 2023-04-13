#include "main.h"
#include <stdlib.h>
/**
 * strtow - function that splits a string into words.
 * @str: tring tosplit
 * 
 * Return: returns a pointer to an array of strings (words)
 * Or NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **array_words;
	int i;
	int how_words = 0;

	if (str == NULL || str = "")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i = 0 || str[i - 1] == ' ')
				how_words++;
	}

	array_words = malloc((how_words + 1) * sizeof(char));

	if (array = NULL)
		return (NULL);

}
