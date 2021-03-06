#include "hash_tables.h"
/**
 *hash_table_set - add an element to the hash table
 *@ht: the hash table to add or update
 *@key: the key / can be an empty string
 *@value: the value of the key / can be an empty string
 *Return: 1 on success 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
char *copy;
unsigned long int index, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
copy = strdup(value);
if (copy == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = copy;
return (1);
}
}
node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
free(copy);
return (0);
}
node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (0);
}
node->value = copy;
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
