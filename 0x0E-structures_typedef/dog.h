#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: ownwer
 * Description: struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - ...
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
