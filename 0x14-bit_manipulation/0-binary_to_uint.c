#include "holberton.h"
/**
 *binary_to_uint - convert binary to int
 *@b: str
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int o = 0, i = 1;
int j = 0;

if (*b == '\0')
return (0);
while (b[j] != '\0')
j++;
j -= 1;
while (j >= 0)
{
if (b[j] != '0' && b[j] != '1')
return (0);
o = o + ((b[j] - '0') * i);
i *= 2;
--j;
}
return (o);
}
