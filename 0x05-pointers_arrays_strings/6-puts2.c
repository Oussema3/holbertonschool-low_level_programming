#include "holberton.h"
/**
 *puts2 - print a modified string
 *@str: the giving string
 */
void puts2(char *str)
{
int i, j;

for (j = 0; str[j]; j++)
{}
for (i = 0; i < j ; i = i + 2)
{
_putchar (str[i]);
}
_putchar ('\n');
}
