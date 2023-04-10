#include "hash_tables.h"

/**
 * the #include "hash_tables.h" library enables us to create hash tables.
 * the size of the array woould be determine by; @size.
 *
 * The Return type would be NULL if an error is encountred.
 *      else - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; i++)
		ht->array [x] = NULL;
	return (ht);
}
