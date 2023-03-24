#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 **/
int main(void)
{
	unsigned long num = 612852475143; /* Declare and initialize the number*/
	unsigned long i, largest_factor = 0;

	/* Divide the number by 2 until it's no longer even */
	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	/* Check for odd factors up to the square root of the number */

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}
	/* If the remaining number is greater than 2, it must be prime */
	if (num > 2)
	{
		largest_factor = num;
	}
	/* Print the largest prime factor */

	printf("%lu\n", largest_factor);
	return (0);
}

