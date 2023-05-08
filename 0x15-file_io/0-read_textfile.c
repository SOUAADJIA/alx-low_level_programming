#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	size_t bytes_to_read;
	size_t bytes_to_write;
	FILE *fp = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (fp == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_to_read = fread(buff, 1, letters, fp);
	if (bytes_to_read == 0)
	{
		fclose(fp);
		return (0);
	}

	bytes_to_write = fwrite(buff, 1, bytes_to_read, stdout);
	fclose(fp);

	if (bytes_to_write < bytes_to_read)
		return (0);
	return (bytes_to_write);
}

