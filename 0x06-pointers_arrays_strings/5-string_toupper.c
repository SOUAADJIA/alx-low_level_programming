#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		/**
		 * The reason for subtracting 32 from the ASCII value of a lowercase
		 * letter is because the ASCII values of uppercas letters are 32 less
		 * than the ASCII values of their corresponding lowercase letters.
		 */

		i++;
	}
	return (n);
}
