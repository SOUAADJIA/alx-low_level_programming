#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size_array;

	if (min > max)
		return (NULL);
	size_array = max - min + 1;
	ptr = malloc(((size_array) * sizeof(int)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size_array; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
