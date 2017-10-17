#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog (char)
 * @age: age of dog (float)
 * @owner: owner of dog (char)
 *
 * Return: pointer to dog_t or NULL if function fails to allocate memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog = malloc(sizeof(dog_t));
	char *new_n, *new_o;
	int i; /* index for new_n & new_o */

	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; ++i)
		;
	new_n = malloc(sizeof(char) * (i * 1));
	if (new_n == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (i >= 0)
	{
		new_n[i] = name[i];
		--i;
	}
	for (i = 0; owner[i]; ++i)
		;
	new_o = malloc(sizeof(char) * (i + 1));
	if (new_o == NULL)
	{
		free(new_o);
		return (NULL);
	}
	while (i >= 0)
	{
		new_o[i] = owner[i];
		--i;
	}
	dog->name = new_n;
	dog->age = age;
	dog->owner = new_o;
	return (dog);
}
