#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse (W.O.D)
 *@s: wanted string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
