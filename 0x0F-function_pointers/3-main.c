#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - print res
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
int n1, n2;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
operator = get_op_func(argv[2]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3])

printf("%d\n",operator(n1,n2));
return (0);
}
