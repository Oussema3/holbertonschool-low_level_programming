#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - return a list of arguments
 * @n: number of elements
 * @separator: between element of list
 * Return: list of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list rnd;
unsigned int i = 0;
char *j;


va_start(rnd, n);

while (i < n)
{
j = va_arg(rnd, char*);
if (j == NULL)
printf("(nil)");

else
printf("%s", j);
if (((i < (n - 1)) && separator != NULL))
printf("%s", separator);
i++;
}
printf("\n");


va_end(rnd);

}

