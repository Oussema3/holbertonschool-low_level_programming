#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter
 * @array: array
 * @size: size
 * @action: nice name
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == '\0' || action == '\0')
return;

for (i = 0; i < size; i++)
action(array[i]);

}
