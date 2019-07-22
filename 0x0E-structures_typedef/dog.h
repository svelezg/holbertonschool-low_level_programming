#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Structure fir Dog information including:
 * name, age and owner
 */
typedef struct dog {
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */


