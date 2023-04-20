#include "3-calc.h"
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

	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && arg3 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(arg1, arg3));
	return (0);
}
