#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
			n++;
			continue;
		}

		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
