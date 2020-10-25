#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all argument (handiling different types)
 *@format: type of all arguments
 *Return: args
 */
void print_all(const char * const format, ...)
{
char *a;
va_list rnd;
int i = 0, chk;
va_start(rnd, format);
while (format && format[i])
{
chk = 1;
switch (format[i])
{
case 'c':
printf("%c", va_arg(rnd, int));
break;
case 'f':
printf("%f", va_arg(rnd, double));
break;
case 'i':
printf("%i", va_arg(rnd, int));
break;
case 's':
a = va_arg(rnd, char *);
if (a == NULL)
{
printf("(nil)");
break;
}
printf("%s", a);
break;
default:
chk = 0;
}
if ((chk == 1) && format[i + 1] != '\0')
printf(", ");
i++;
va_end(rnd);
}
printf("\n");
}
