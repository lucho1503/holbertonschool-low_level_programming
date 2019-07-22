#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - struct the dog that have three variables.
 * @name: variable that store data types name.
 * @age: variable thar store data types age.
 * @owner: variable that store data types owner.
 * Description: name the struct is dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* STRUCT_DOG */
