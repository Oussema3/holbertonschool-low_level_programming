#include "holberton.h"
#include <stdio.h>
/**
 *cap_string - capitilize the first letter of each word
 *@a: string
 *Return: char
 */
char *cap_string(char *a)
{
int i = 0, j;
char ch[] = " \n\t,;.!?\"(){}";

while (a[i] != '\0')
{
if (a[i] >= 'a' && a[i] <= 'z')
{
if (i == 0)
a[i] -= 32;
else
{
for (j = 0; ch[j] != '\0'; j++)
{
if (ch[j] == a[i - 1])
a[i] -= 32;
}
}
}
i++;
}
return (a);
}
