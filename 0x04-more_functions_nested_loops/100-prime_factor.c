#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
 * main - Gives the largest prime factor of a giving number
 *
 * Return: returns
 */
int main(void)
{
long size = 612852475143;
long i;
for (i = 2; i < sqrt(size); i++)
while ((size % i) == 0)
size /= i;
printf("%ld\n", size);

return (0);
}
