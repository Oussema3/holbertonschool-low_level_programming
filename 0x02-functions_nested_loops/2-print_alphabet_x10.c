#include "holberton.h"
void print_alphabet_x10(void)
{ int i;
  int j;
  i = 0;
  while (i < 10) {
    
    j ='a';
    while (j <= 'z')
{
      
   _putchar(j++);
    }

  
    _putchar('\n');
    i++; 
  
  }
}
