#include <stdio.h>
/**
 *main - entry point
 *
 * Return: 0 in success
 */
int main(void)
{
int i;
char x;
for (i = 48; i < 58 ; i++)
putchar(i);
for (x = 'a'; x < 'g'; x++)
putchar(x);
putchar('\n');
return (0);
}
