#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return:returned pointer should point to a newly allocated space in
 *  memory which contains the contents of s1, followed by the contents
 *  of s2, and null terminated, or return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_s3;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s3 = strlen(s1) + strlen(s2) + 1;
	s3 = malloc(len_s3 * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	strcpy(s3, s1);
	strcat(s3, s2);

	return (s3);
}
