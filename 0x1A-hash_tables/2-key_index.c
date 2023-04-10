#include "hash_tables.h"

/**
 * key_index - locates an index of a key in hash table
 *
 * @key: immutable key for each element
 * @size: illustrates size of hash table
 * Return: array index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
