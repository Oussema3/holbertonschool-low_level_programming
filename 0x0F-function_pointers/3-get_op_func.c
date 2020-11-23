#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_op_func - selects the correct operator
 *@s: operator
 *Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int O = 0;
while (ops[O].op != '\0')
{
if (s[0] == ops[O].op[0])
{
return (ops[O].f);
}
O++;
}
return (0);
}
