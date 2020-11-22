#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concate two strings
 *@s1: pointer
 *@s2: pointer
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *round;

int i, j = 0, o = 0;
if (s1 != '\0')
{
while (s1[j] != '\0')
j++;
}
if (s2 != '\0')
{
while (s2[o] != '\0')
o++;
}
round = malloc(sizeof(char) * (j + o + 1));
if (round == '\0')
return (0);
for (i = 0; i < j; i++)
{
round[i] = s1[i];
}
for (i = 0; i < o; i++)
round[i + j] = s2[i];

round[j + o] = '\0';
return (round);
}
