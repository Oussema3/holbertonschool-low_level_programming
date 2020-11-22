#include <stdlib.h>
#include "holberton.h"


/**
 * _strdup - returns pointer to an allocated space in me!mory
 *@str: pointer
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
int i, j;
char *round;
if (str == '\0')
{
return (0);
}
for (j = 0; str[j] != '\0';)
{
j++;
}
round = malloc(sizeof(char) * j + 1);
if (round == '\0')
return (0);
for (i = 0; i < j; i++)
round[i] = str[i];
round[j] = str[j];
return (round);
}

