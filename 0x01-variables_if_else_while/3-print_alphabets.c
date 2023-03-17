#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	int n = 97;
	int N = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (N <= 90)
	{
		putchar(N);
		N++;
	}
	putchar('\n');
	return (0);
}
