#ifndef DOG
#define DOG
#include <stdlib.h>
/**
 *struct dog - struct
 *@name: this is
 *@age: SO OBVIOUS
 *@owner: Why i even decribe those element ?
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG */
