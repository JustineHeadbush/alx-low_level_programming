#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the list
 * @str: the string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *m;
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

	for (len = 0; str[len];)
		len++;

	n->len = len;
	n->next = *head;
	n->str = s;

	if (*head == NULL)
	{
		*head = n;
	}

	else
	{
		for (m = *head; m->next != NULL;)
			m = m->next;
		m->next = n;
	}

        return (*head);
}
