#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the first node of linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h);
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		++node_count;
	}
	return (node_count);
}

/**
 * Algorithm - Steps
 * Same process of printing elements, but only need to retrn node count,
 * add in print function
 *
 * 1- count all the nodes
 * 2- declare varaibale
 * 3- initialize count to 0
 * 4- increment in a loop until it hits NULL
 * 5- set that when *h is not equal to NULL
 * 6- continue to (h)
 * 7- want h's & to point to N(the known data)
 * set h to point to next
*/
