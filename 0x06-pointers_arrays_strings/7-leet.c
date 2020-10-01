#include <stdio.h>
#include "holberton.h"
/**
 *leet - translate to leet discussion
 *@s: pointer of result
 *Return: string
 */
char *leet(char *s)
{
int x = 0, y;
char d[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
char c[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
while (s[x] != '\0')
{
for (y = 0; d[y] != '\0'; y++)
{
if (s[x] == d[y] || s[x] == d[y])
{
s[x] = c[y];
}
}
x++;
}
return (s);
}
