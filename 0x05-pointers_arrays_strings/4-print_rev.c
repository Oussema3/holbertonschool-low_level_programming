#include "holberton.h"
/**
 *print_rev - prints the reverse of a givingstring
 *@s: char
 */
void print_rev(char *s)
{
int i = 0;
for (i = 0; s[i]; i++)
{}
for (; i > 0; i--)
_putchar(s[i - 1]);
_putchar('\n');
}
