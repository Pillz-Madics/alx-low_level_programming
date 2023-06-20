#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Description: Attributes of a dog and name of owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - type for structure of dog.
 */

typedef struct dog dog_t;

int _putchar(char c);
void init_dow(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
