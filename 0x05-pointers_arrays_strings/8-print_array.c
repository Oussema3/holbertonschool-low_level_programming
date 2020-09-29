#include "holberton.h"
#include <stdio.h>
/**
 *print_array - print array
 *@a: array
 *@n: integer
 */
void print_array(int *a, int n)
{
int a;
for (a = 0; a < n; a++)
{
printf("%d", a[a]);
if (a == n - 1)
continue;
printf(", ");
}
printf("\n");
}
