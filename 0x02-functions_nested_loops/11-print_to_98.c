#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print number to 98 whether by crementation or decrementation
 * @n: int
 * Return: list of numbers (incrementing or decrementing  to 98)
 */

void print_to_98(int n)
{
int a;

if (n >= 98)
{
for (a = n; a >= 98; a--)
{
if (a == 98)
printf("%d", a);
else
printf("%d, ", a);
}
}
else
{
for (a = n; a <= 98; a++)
{
if (a == 98)
printf("%d", a);
else
printf("%d, ", a);
}
}
printf("\n");
}
