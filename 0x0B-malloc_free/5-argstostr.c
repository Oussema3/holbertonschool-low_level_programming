#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concating  arguments
 *@ac: integer
 *@av: char 
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
char *round;
int o, i, j = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (o = 0; o < ac; o++)
{
for (i = 0; av[o][i] != '\0'; i++)
j++;
}
round = malloc(sizeof(char) * j + 1 + ac);
j = 0;
for (o = 0; o < ac; o++)
{
for (i = 0; av[o][i] != '\0'; i++)
{
round[j] = av[o][i];
j++;
}
round[j] = '\n';
j++;
}
return (round);
}
