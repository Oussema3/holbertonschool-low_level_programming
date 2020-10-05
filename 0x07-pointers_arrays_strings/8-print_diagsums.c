#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: intefer
 *@size: integer
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
int diag1 = 0, diag2 = 0, b = 0;
int length = size * size;

while (b < length)
{
diag1 += a[b];
b += size + 1;
}
b = size - 1;
while (b < length - 1)
{
diag2 += a[b];
b += size - 1;
}
printf("%d, %d\n", diag1, diag2);
}
