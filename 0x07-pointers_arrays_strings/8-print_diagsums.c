#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer to array
 * @size: size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_D1 = 0, sum_D2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_D1 = sum_D1 + a[i * size + i];
		sum_D2 = sum_D2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_D1 , sum_D2);
}
