#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: Prints the key/value pairs in the order that they appear
 *              in the array of the hash table, followed by a new line
 *              If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int first_pair = 1;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            if (!first_pair)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            first_pair = 0;
            node = node->next;
        }
    }
    printf("}\n");
}
