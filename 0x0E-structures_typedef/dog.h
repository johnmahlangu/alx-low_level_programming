#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: ownwer
 * Description: struct for dog
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;
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
