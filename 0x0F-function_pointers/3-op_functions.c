#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_mul - multiply 2 numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_mul(int a, int b)
{
return (a * b);
}


/**
 * op_div - make devision between two numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}
/**
 * op_mod - determpines the remaining of the division between 2 numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
/**
 * op_add - addition of 2 numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtitute 2 numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_sub(int a, int b)
{
return (a - b);
}
