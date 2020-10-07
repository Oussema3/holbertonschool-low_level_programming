#include "holberton.h"
#include <stdio.h>
/**
 *Fst_function - check for the square
 *@i: int
 *@j: int
 *Return: int
 */
int Fst_function(int i, int j)
{
if (i * i == j)
return (i);
else if (i * i > j)
return (-1);
else
return (Fst_function(i + 1, j));
}
/**
 *_sqrt_recursion - return the naturel square of a nummber
 *@n: givin number
 *Return: int
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else
return (Fst_function(1, n));
}

