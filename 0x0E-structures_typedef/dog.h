#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - Struct dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Description: Struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for strcut dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
