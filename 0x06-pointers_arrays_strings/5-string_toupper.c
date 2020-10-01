#include "holberton.h"
#include <string.h>
/**
 *string_toupper - concate 2 strings
 *@str: the first string
 *Return: string
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{

if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
