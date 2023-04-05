#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 *
 * @b: pointer to buffer
 *
 * @size: bytes of the buffer pointed by b
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		printf("\n");
	}
	while (i < size)
	{
		/* Each line starts with the position of the first byte of*/
		/* the line in hexadecimal (8 chars), starting with 0 */
		printf("%08x", i);
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
			{
				/* Each line shows the hexadecimal content (2 chars) of*/
				/* the buffer, 2 bytes at a time, separated by a space */
				printf("%02x", b[i + j]);
			}
			else
				printf("  "); /* fill with spaces if buffer < 10 bytes */
			printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
			{
				/* Each line shows the content of the buffer. If the byte is*/
				/* a printable character, print the letter, if not, print */
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
				printf(" ");
		}
		printf("\n");
		i = i + 10;
	}
}
