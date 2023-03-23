#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1, second = 2, next;
	int count = 0;

	printf("%d, %d, ", first, second);
	count += 2;

	while (count < 98)
	{
		next = first + second;
		printf("%d", next);
		if (count < 97)
		{
			printf(", ");
		}
		count++;
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
