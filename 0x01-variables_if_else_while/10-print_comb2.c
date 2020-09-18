#include <stdio.h>
/**
 *main - entry point
 *
 * Return: 0 in success
 */
int main(void)
{
int a = 0;
for (a = 0; a < 100; a++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
if (a < 99)
{
putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
