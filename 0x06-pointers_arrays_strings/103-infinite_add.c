#include "main.h"
/**
 * infinite_add - function that adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return: always 0 (success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0;
	int digit1 = 0, digit2 = 0;
	int sum, carry = 0, position = 0;

	while (n1[len_n1] != '\0')
	{
	}

	while (n2[len_n2] != '\0')
	{
		len_n2++;
	}
	while (len_n1 > 0 || len_n2 > 0)
	{
		if (len_n1 > 0)
			digit1 = n1[len_n1 - 1] - '0';
		if (len_n2 > 0)
			digit2 = n2[len_n2 - 1] - '0';

		sum = digit1 + digit2 + carry;
		carry = sum / 10;

		if (position >= size_r - 1)
		{
			return (0);
		}
		r[position++] = sum % 10 + '0';

		len_n1--;
		len_n2--;
	}

	return (0);
}
