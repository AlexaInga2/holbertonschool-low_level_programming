#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog type
 * @d: pointer to the structure (dog)
 * If element of d is NULL, print (nil),if name is NULL,
 * print Name: (nil))
 *
 *Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
