#include "dog.h"
/**
 *init_dog - calling the structure
 *@d: The Structure
 *@name: still dont
 *@age: know why
 *@owner: taking abt this
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
