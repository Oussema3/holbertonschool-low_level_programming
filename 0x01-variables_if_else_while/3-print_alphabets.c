#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 in success
 */
int main(void)
{
int a;

for (a = 'a'; a <= 'z'; a++)
putchar(a);
int b;
for (b = 'A'; b <= 'Z'; b++)
putchar(b);
putchar('\n');
return (0);
}
