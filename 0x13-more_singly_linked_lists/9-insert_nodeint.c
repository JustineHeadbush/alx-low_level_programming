#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *a, *b = *head;

	if (head == NULL)
		return (NULL);

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;

	for (num = 0; num < (idx - 1); num++)
	{
		if (b == NULL || b->next == NULL)
			return (NULL);
		b = b->next;
	}

	if (idx == 0)
	{
		a->next = b;
		*head = a;
		return (a);
	}

	a->next = b->next;
	b->next = a;

	return (a);
}
