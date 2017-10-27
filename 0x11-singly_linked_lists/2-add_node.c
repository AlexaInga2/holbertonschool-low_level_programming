#include "lists.h"
#include <string.h>
/**
 * _strlen - calculates  the  length  of  the string s, excluding '\0' byte
 * @str: string to find length of
 *
 * Return: the length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str && str[i]; i++)
		;
	return (i);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: string for new node (duplicated string)
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* strdup function duplicates a string */
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
