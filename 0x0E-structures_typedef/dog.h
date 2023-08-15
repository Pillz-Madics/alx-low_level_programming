#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the dog's owner
 *
 * Description: this is a structure of a dog with its attributes
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef struct dog dog_t - typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
