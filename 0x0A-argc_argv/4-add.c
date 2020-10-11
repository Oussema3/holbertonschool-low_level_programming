#include <stdio.h>
#include "stdlib.h"
/**
 *main - Addiction
 *@argc: argv
 *@argv: argc
 *Return: 0 (first condition), 1 (error)
 */
int main(int argc, char *argv[])
{
int add = 0;
int a = 0, b = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!(argv[a][b] >= '0' && argv[a][b] <= '9'))
{
printf("Error\n");
return (1);
}
}
}
for (a = 1; a < argc; a++)
add += atoi(argv[a]);
printf("%d\n", add);
return (0);
}
