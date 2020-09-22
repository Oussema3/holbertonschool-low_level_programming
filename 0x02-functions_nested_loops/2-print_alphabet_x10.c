#include "holberton.h"
/**
 * print_alphabet_x10 - return the alphabet while a condition is true
 *
 *
 * Return: 1 or 0 success
 */
void print_alphabet_x10(void)
{
int i;
int j;
i = 0;
while (i < 10)
{
j = 'a';
while (j <= 'z')
{
_putchar(j++);
}
_putchar('\n');
i++;
}
}
