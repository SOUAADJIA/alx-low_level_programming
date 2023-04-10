#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 *
 * @argc: count the number of arguments passed to the program
 * @argv: one-dimensional array of strings. Each string is one of
 * the arguments that was passed to the program.
 *
 * Return: 0 (sucess)or 1 failure
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int i, min_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++) /* 5 is the number of elements in coins array*/
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			min_coins++;
		}
	}
	printf("%d\n", min_coins);
	return (0);
}
