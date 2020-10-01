#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - reverse array
 *@a: array
 *@n: number of element in array
 *Return: array reveersed
 */
void reverse_array(int *a, int n)
{
int i, b;
i = 0;

for (i = 0; i < n / 2; ++i)
{
b = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = b;
}
}
