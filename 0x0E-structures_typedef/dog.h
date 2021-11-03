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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
