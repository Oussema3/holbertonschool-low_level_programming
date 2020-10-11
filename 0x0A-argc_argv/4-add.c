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
int a;
int b;

argv[0] = "0";
if (argc - 1 > 1 && argc - 1 < 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a + b);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
