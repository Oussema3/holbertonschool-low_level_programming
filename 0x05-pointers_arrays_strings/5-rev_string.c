#include "holberton.h"
/**
 *rev_string - print string in Reverse
 *@s: char
 */
void rev_string(char *s)
{
int a = 0;
int b = 0;
char ch1;
for (a = 0; s[a]; a++)
{}
for (b = 0; b < a / 2; b++)
{
ch1 = s[b];
s[b] = s[a - b - 1];
s[a - b - 1] = ch1;
}
}
