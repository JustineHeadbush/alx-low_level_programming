#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the list
 * @str: the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	char *s;
	int len;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len]; len++)

	n->len = len;
	n->next = *head;
	n->str = s;
	*head = n;
	
	return (n);
}
