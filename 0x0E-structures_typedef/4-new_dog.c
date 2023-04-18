#include "dog.h"
#include <stdlib.h>

/**
* _strlen - returns the length of a string.
*
* @s: string.
*
* Return: length of string.
*/

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
* *_strcpy - copies the string pointed by src.
*@dest: pointer to the buffer in which the string is copied.
*@src: string to be copied.
*
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - function that creates a new dog.
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Return: new dog of type dog_t or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name, len_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	len_name = _strlen(name);
	d->name = malloc(sizeof(len_name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	len_owner = _strlen(owner);
	d->owner = malloc(sizeof(len_owner) + 1);
	if (d->owner == NULL)
	{

		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}




