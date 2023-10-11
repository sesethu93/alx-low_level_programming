#ifndef _MAIN_H_
#define _MAIN_H_

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
