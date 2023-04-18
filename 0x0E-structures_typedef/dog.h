#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my structure
 * @name: fisrt member
 * @age: Second member
 * @owner: Third member
 *
 * Description: my first structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
