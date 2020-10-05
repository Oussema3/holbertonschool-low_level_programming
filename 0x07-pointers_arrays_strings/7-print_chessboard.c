#include "holberton.h"
/**
 *print_chessboard - print chess board using characters
 *@a: var
 * Return: F.diagram
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;

while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
i++;
_putchar('\n');
}
}
