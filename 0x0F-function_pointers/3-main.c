#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print res
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
int res, n1, n2;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
res = operator(n1, n2);
printf("%d\n", res);
return (0);
}
