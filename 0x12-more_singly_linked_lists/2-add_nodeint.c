#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the address and start of lnked list, returns a pointer
 * @n: variable of type int to be added to linked list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_ *new_node;
	new_node = malloc(sizeof(listint_t));
	while (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
	
/**
 * Algorithm - Steps
 *
 * 1- add new node to beginning of list
 * 2- find the address of the new element
 * aka find & of head & then make new node hold &
 * 3- double point: move a pointer to another pointer
 * 4- create/declare new node and malloc it
 * 5- put data inside new node
 * 6- make the next node of new node the HEAD
 * 7- set head to point to the new node
*/
