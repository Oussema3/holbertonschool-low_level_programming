#include "hash_tables.h"
/**
 *hash_table_create - creating a hash table
 *@size: size of the table
 *Return: a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash = NULL;
unsigned long int i;
hash = malloc(sizeof(hash_table_t));
if (hash == NULL)
return (NULL);
hash->size = size;
hash->array = calloc(size, sizeof(hash_node_t *));
if (hash->array == NULL)
{
free(hash);
return (NULL);
}
for (i = 0; i < size; i++)
hash->array[i] = NULL;
return (hash);
}
