#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key
 * @size:  is the size of the array of the hash table
 * Return: index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_d = 0, index = 0;

	hash_d = hash_djb2(key);
	index = hash_d % size;
	return (index);
}

