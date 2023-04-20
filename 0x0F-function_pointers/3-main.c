#include "3-calc.h"
/**
 * main -  our main programm
 * @argc: nbr of args
 * @argv: array of args
 * 
 * return: result
 */
int main(int argc, char *argv[])
{
	int arg1, arg3;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	if (!get_op_func(argv[2]))
	{
		printf("Error");
                exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(arg1, arg3));
	return (0);
}
