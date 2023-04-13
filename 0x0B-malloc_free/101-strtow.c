#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words.
 * @str: string to split
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

    for (i = 0; i < how_words; i++)
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
                free(array_words[j]);
            free(array_words);
            return (NULL);
        }

        strncpy(array_words[i], &str[k], len_word);
        array_words[i][len_word] = '\0';
        k = j;
    }

    array_words[how_words] = NULL;

    return (array_words);
}

