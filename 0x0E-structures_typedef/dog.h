#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - properties of a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct object of a dog
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