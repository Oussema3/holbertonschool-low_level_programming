#include "holberton.h"
/**
 * print_sign - give the sign of an int
 *
 * @n: show the number that we will test
 * Return: 1 or 0 or -1 success
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{

_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);

}
}
