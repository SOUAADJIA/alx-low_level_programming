#include "main.h"

/**
 * is_palindrome - function that checks if a string is a palindrome 
 *
 * @s: pointer to string that we gonna check
 *
 * Return: 1 if a string is a palindrome and 0 if not
 *
 *
 *
 */

int is_palindrome(char *s)
{
	int len_s = _strlen_recursion(s);

	if ((len_s == 0) || (len_s == 1)) /* if lenght of s is 0 or 1 is a palindrome*/
		return (1);
	else 
		return (is_palindrome_helper(s, 0, len_s - 1));
}
int is_palindrome_helper(char *s, int beginning, int end)
{

        if (beginning >= end) /*all characters compared*/
                return (1);
        else if (s[beginning] != s[end])
                return (0);
	else
		return (is_palindrome_helper(s, beginning + 1, end - 1));
}

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: pointer to string
 *
 * Return: entiger the lentgh of a string
 */

int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);

        return (1 + _strlen_recursion(s + 1));

}
