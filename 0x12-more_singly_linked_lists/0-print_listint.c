#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the elements, which are nodes, of
 * a listint_t list
 * @h: pointer to the first node of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	h = h->next;
	++node_count;
	}
	return (node_count);
}

/**
 * Algorithm - Steps
 * 1- count all the nodes
 * 2- declare varaibale
 * 3- initialize count to 0
 * 4- increment in a loop until it hits NULL
 * 5- set that when *h is not equal to NULL
 * 6- continue to (h)
 * 7- want h's & to point to N(the known data)
 * set h to point to next
*/
