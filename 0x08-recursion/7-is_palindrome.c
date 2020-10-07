#include "holberton.h"
#include <stdio.h>
/**
 * Butterfly - fiirst function
 * @s: given string
 * @i: counter
 * @a: lenght of string
 * Return: reciprocal return
 */
int Butterfly(char *s, int a, int i)
{
if (s[i] == s[a] && a != i)
return (Butterfly(s, --a, ++i));
if (s[i] == s[a] || i >= a)
return (1);
if (s[i] != s[a])
return (0);
return (1);
}
/**
 * ButterFly1 - check the lenght of the string
 * @s: given string
 * @i: counter
 * Return: reciprocal return
 */
int ButterFly1(char *s, int i)
{

if (s[i] != '\0')
return (ButterFly1(s, ++i));
return (--i);

}
/**
 * is_palindrome - check the number
 * @s: given string
 * Return: 1 (palindrome), 0 (non palindrome)
 */
int is_palindrome(char *s)
{
int length;

length = ButterFly1(s, 0);
return (Butterfly(s, length, 0));
}
