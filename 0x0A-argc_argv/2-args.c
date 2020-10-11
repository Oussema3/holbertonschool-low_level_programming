#include <stdio.h>

/**
 * main - prints all argumeents
 * @argv: argv
 * @argc: argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

i = 0;
while (i != argc)
printf("%s\n", argv[i++]);
return (0);
}
