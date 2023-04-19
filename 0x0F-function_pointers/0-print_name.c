#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name:name of the person
 * @f: pointer points to function f
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
