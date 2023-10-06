#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_array;

	new_table = calloc(1, sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_array = calloc(size, sizeof(hash_node_t *));
	if (new_array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->array = new_array;
	return (new_table);
}
