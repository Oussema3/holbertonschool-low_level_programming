#include "holberton.h"
/**
 *puts_half - prints the half
 *@str: giving string
 */
void puts_half(char *str)
{
int a, b, c;

for (a = 0; str[a]; a++)
{}
if (a % 2 == 0)
{
c = a / 2;
for (b = c; b < a; b++)
{
_putchar (str[b]);
}
}
else
{
c = (a + 1) / 2;
for (b = c; b < a; b++)
{
_putchar (str[b]);
}
}
_putchar ('\n');
}
