#include "main.h"
/**
 * print_number - prints an integer.
 * @n:.integer to be printed.
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		/**
		 * checks if the input number n is negative.
		 *  If it is, the function prints a - character
		 *  and then makes n positive by multiplying it by -1.
		 */

		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
