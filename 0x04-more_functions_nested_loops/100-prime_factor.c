#include <stdio.h>

/**
 * main - return prime factors of a given number
 * Return: 0
 */
int main(void)
{
long i = 612852475143;
int j = 2;
while (j * j < i)
{
while (i % j == 0)
{
i = i / j;
j = j + 1;
}
printf("%ld", i);
printf("\n");
return (0);
}
