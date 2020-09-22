#include "holberton.h"
void jack_bauer(void){
  int s,m;
  s=0;
  while (s < 24)
    {
      m=0;
      while (m < 60)
	{
	  _putchar(s / 10 + '0');
	  _putchar(s % 10 + '0');
	  _putchar(':');
	  _putchar(m / 10 + '0');
	  _putchar(m % 10 + '0');
	  _putchar('\n');
	  m++;
	}
      s++;
    }
}
