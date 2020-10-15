#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - initialise array
 *@size: size of array
 *@c: char
 *Return: string or NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ch;

if (size == 0)
return (NULL);
ch = malloc(size * sizeof(char));
if (ch == NULL)
return (NULL);
for (i = 0; i <= size; i++)
ch[i] = c;
ch[i + 1] = '\0';
return (ch);
}
