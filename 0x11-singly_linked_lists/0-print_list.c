#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the number of nodes
 *
 * Return: if str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
/* checking to see if string is NULL */
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u], %s\n", temp->len, temp->str);
		temp = temp->next;
	}
		return (i);
}
