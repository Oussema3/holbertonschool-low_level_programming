#include "function_pointers.h"
/**
 * int_index - seek for int variables
 * @array: array
 * @size: size
 * @cmp: comparin
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int O = 0;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (O = 0; size > O; O++)
{
if (cmp(array[O]) != 0)
return (O);
}
return (-1);
}
