#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 **/

int main(void)
{
	unsigned long int i, n = 612852475143;

	/**
	 * The square root of 612852475143 is approximately 782849,
	 * so we can safely limit our search for factors
	 * to the range from 3 to 782849.
	 */
	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
		/**
		 * The reason we remove all factors of i from n is
		 * This allows us to continue checking for prime factors until
		 * we have found the largest prime factor of n
		 */
	}
	printf("%lu\n", n);
	return (0);
}
