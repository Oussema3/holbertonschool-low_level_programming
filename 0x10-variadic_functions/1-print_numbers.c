#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - return a list of arguments
 * @n: number of elements
 * @separator: between element of list
 * Return: list of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list rnd;
unsigned int i = 0;
int j;


va_start(rnd, n);

while (i < n)
{
j = va_arg(rnd, int);
printf("%d", j);
if (((i < (n - 1)) && separator != NULL))
printf("%s", separator);
i++;
}
printf("\n");


va_end(rnd);

}
