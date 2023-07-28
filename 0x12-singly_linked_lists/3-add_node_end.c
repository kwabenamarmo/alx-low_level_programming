#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - will add a new node at the ending of a linked list
 * @head: double pointer to list_t list
 * @str: string to put in a new node
 * Return: address of the new element, and NULL if it does not return
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	
	{
		*head = new;

		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
