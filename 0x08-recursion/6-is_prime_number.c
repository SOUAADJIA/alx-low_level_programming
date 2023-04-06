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
	/*checking if n is prime by starting with the smallest possible divisor 2*/
	else
		return (calculate_is_prime(n, 2));

}
/**
 * calculate_is_prime - calculate is prime
 * @n: integer input to check if prime
 * @i: devisor to check with
 *
 * Return: function that returns 1 if the input integer is a
 * prime number, otherwise return 0
 */

int calculate_is_prime(int n, int i)
{
	if (n < 2)
		return (0);

	else if ((n == 2) || (n == 3))
		return (1);

	else if ((n % i) == 0)
		return (0);

	else if ((i * i) > n)

		return (1);
	else
		return (calculate_is_prime(n, i + 1));
}
