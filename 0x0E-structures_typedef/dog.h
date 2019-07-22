#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - representation of a dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: It's a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
