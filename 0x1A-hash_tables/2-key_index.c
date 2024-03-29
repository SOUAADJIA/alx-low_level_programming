#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table array.
 * @key: The key for which to calculate the index.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
