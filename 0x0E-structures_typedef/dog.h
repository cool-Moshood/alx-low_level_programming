#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for a dog object
 * dog_t - typedef
 * @name:  dog name
 * @age:   dog age
 * @owner: dog 0wner
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
