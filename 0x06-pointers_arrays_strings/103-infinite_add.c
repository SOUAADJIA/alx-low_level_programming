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
	int i = 0, j = position - 1;
	char tmp;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;
	while (len_n1 > 0 || len_n2 > 0)
	{
		digit1 = (len_n1 > 0) ? n1[len_n1 - 1] - '0' : 0;
		digit2 = (len_n2 > 0) ? n2[len_n2 - 1] - '0' : 0;
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
	if (carry > 0)
	{
		if (position >= size_r - 1)
			return (0);
		r[position++] = carry + '0';
	}
	r[position] = '\0';
	while (i < j)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
		i++;
		j--;
	}
	return (r);
}
