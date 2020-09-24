#include "holberton.h"
/**
 * more_numbers - checks if c is digit between 0 and 9 or not
 *
 * Return: void
 */
void more_numbers(void)
{
int i;
int j;
i = 0;
while (i < 10)
{
j = 0;
while (j <= 14)
{

if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j  % 10) + '0');
j++;
}
_putchar('\n');
i++;
}
}
