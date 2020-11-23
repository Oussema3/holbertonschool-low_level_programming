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
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *pt_to_stuct(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
int _strlength(char *s);
void free_dog(dog_t *d);
#endif
