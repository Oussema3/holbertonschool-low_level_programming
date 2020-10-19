#include <stdlib.h>
/**
 *length - give us length of a string
 *@L: string to calculate it's length
 *Return: obviously the lenght of the string  
 */
int length(char *L)
{
int i = 0;

while (L[i] != '\0')
i++;
return (i);
}
/**
 *_strdup - copies the string in the allocated memory
 *@str: string
 *Return: string'
 */
char *_strdup(char *str)
{

char *strcpd;
int a;

if (str == NULL)
return (NULL);
strcpd = malloc(sizeof(char) * length(str) + 1);
if (strcpd == NULL)
return (NULL);
for (a = 0; a <= length(str); a++)
strcpd[a] = str[a];
strcpd[a + 1] = '\0';
return (strcpd);
}
