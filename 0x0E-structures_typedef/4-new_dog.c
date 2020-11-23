#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlength - lentgh of the string
 *@s: pointer
 * Return: the length of string
 */
int _strlength(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
/**
 *new_dog - creat new dog
 *@name: pointer
 *@age: float
 *@owner: pointer
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *round;
int i;
round = malloc(sizeof(dog_t));
if (round == '\0' || name == '\0' || owner == '\0')
{
return (0);
}
round->name = malloc(sizeof(char) * (_strlength(name) + 1));
round->age = age;
round->owner = malloc(sizeof(char) * (_strlength(owner) + 1));
if (round->name == '\0' || round->owner == '\0')
{
free(round->name);
free(round->owner);
free(round);
return (0);
}
for (i = 0; name[i]; i++)
{
round->name[i] = name[i];
}
round->name[i] = '\0';
for (i = 0; owner[i]; i++)
{
round->owner[i] = owner[i];
}
round->owner[i] = '\0';
return (round);
}
