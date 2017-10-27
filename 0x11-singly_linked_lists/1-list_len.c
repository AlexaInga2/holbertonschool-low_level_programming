#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function that returns the # of elements in a linked list_t list
 * @h: pointer to the start of the list/ the address of first node
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
