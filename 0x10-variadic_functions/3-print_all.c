#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print char character
 * @arg: argument of type char
 *
 * Return: void
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_int - print integer
 * @arg: argument to print of type integer
 *
 * Return: void
 */

void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}
/**
 * print_float - print float
 * @arg: argument to print of type float
 *
 * Return: void
 */

void print_float(va_list arg)
{
	double f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
 * print_string - print string
 * @arg: argument to print of type string
 *
 * Return: void
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	printf("%s", str == NULL ? "(nil)" : str);
}


/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char format_type;

	void (*print_func[])(va_list) = {
		print_char,
		print_int,
		print_float,
		print_string,
	};
	va_start(args, format);

	while (format && format[i])
	{
		format_type = format[i];
		while (j < 4 && format_type != "cifs"[j])
			j++;
		if (j < 4)
		{
			(*print_func[j])(args);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
