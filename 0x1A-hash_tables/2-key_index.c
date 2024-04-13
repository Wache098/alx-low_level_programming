#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /**
     * hash_djb2 - implementation of the djb2 algorithm
     * @str: string used to generate hash value
     *
     * Return: hash value
     */
    unsigned long int hash = 5381;
    int c;

    while ((c = *key++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return (hash % size);
}
