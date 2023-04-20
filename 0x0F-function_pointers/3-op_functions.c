#include "3-calc.h"
/**
 * op_add - calculate the sum of a and b
 * @a: first numebr
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of a and b
 * @a: first numebr
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculate the multiplication of a and b
 * @a: first numebr
 * @b: second number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculate the result of the division of a and b
 * @a: first numebr
 * @b: second number
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculate the remainder of the division of a and b
 * @a: first numebr
 * @b: second number
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (a % b);
}


