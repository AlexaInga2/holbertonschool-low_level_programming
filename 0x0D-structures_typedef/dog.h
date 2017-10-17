#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - the puppies!! & all their cuteness
 * @name: name of dog (puppy)
 * @age: age of dog (puppy)
 * @owner: name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

int_putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
