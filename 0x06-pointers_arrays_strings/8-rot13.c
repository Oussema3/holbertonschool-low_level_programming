#include <stdio.h>
#include "holberton.h"
/**
 *leet - translate to leet discussion
 *@s: pointer of result
 *Return: string
 */
char *rot13(char *s)
{
  int x = 0, y;
  char d[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
  while (s[x] != '\0')
    {
      for (y = 0; d[y] != '\0'; y++)
	{
	  if (s[x] == d[y] || s[x] == d[y])
	    {
	      s[x] = c[y];
	    }
	}
      x++;
    }
  return (s);
}
