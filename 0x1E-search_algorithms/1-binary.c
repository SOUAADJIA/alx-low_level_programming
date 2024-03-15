#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @arr: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *arr, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (arr == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", arr[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = (left + right) / 2;

		if (arr[mid] == value)
			return (mid);

		else if (arr[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1); /* Value not found */
}
