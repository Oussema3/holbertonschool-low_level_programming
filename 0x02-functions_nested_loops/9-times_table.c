#include "holberton.h"

/**
 * times_table - give the remaining time from the year.
 *
 * Return: void empty
 */


void times_table(void)
{
int a, b, c, d, num;

while (a < 10)
{
for (b = 0; b < 10; b++)
{
num = a * b;
c = num / 10;
d = num % 10;
if (num >= 10)
_putchar(c + '0');
_putchar(d + '0');
if (b != 9)
{
_putchar(',');
if (a * (b + 1) < 10)
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
a++;
}
}
