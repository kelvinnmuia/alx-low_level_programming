#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dogs struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
