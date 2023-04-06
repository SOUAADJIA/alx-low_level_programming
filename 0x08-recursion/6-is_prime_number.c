#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a 
 * prime number, otherwise return 0
 *
 * @n: input integer
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if ((n == 2) || (n == 3))
		return (1);
	else
		return (calculate_is_prime(n));


}
