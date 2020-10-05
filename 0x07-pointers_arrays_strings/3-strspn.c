#include "holberton.h"
/**
 *_strspn -  gets the length of a prefix substring.
 *@s: character
 *@accept: character
 *Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, n = 0;

while (s[i] != '\0')
{
i = 0;
while (accept[j] != '\0')
{
j = 0;
if (s[i] == accept[j])
{
n++;
break;

}
j++;
}
if (accept[j] == '\0')
break;
i++;
}

return (n);
}
