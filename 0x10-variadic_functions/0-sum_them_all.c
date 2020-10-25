#include <stdarg.h>
/**
 * sum_them_all - return some of arguments
 * @n: number of elements
 * Return: sum : the sum of all given arguments
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list rnd;
if (n == 0)
return (0);
va_start(rnd, n);
while (i < n)
{
sum += va_arg(rnd, int);
i++;
}
va_end(rnd);
return (sum);
}
