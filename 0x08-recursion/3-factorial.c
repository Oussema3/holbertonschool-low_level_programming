#include "holberton.h"
#include <stdio.h>
/**
 *factorial - Return the factorial of a giiven number
 *@n: int
 *Return: -1 (n lower of 0) , result
 */
int factorial(int n)
{
if (n > 0)
{
if (n == 1 || n == 0)
return (1);
else
return (n * factorial(n - 1));
}
else
return (-1);
}
