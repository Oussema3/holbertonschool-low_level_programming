#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplication
 *@argc: argc
 *@argv: argv
 *Return: 1 (arg == 3) 0 (else)
 */
int main(int argc, char *argv[])
{
int a;

if (argc < 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", a);
return (0);
}
