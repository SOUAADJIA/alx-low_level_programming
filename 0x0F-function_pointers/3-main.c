#include "3-calc.h"
/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int i = 0;
	int min = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			min *= -1;
		}

		while (s[c] >= '0' && s[c] <= '9')
		{
			j = 1;
			i = (i * 10) + (s[c] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}
		c++;
	}

	i *= min;
	return (i);
}
/**
 * main - performs simple operations
 * @argc: nbr of args
 * @argv: array of args
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int arg1, arg3;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = _atoi(argv[1]);
	arg3 = _atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && arg3 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(arg1, arg3));
	return (0);
}
