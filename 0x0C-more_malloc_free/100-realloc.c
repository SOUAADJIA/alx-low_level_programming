#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: Pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/*If new_size == old_size do not do anything and return ptr*/
	if (new_size == old_size)
		return (ptr);
	/* If new_size is equal to zero, and ptr is not NULL,*/
/* then the call is equivalent to free(ptr). Return NULL*/
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
/*If ptr is NULL, then the call is equivalent to malloc(new_size)*/
	else if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

    /* Free the old memory block */
	free(ptr);
	return (new_ptr);
}
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: number bytes to copy
 * Return: apointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
