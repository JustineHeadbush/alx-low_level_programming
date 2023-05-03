#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index
 * index of a listint_t linked list
 * @index: index of the node that should be deleted.
 * @head: pointer
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num;
	listint_t *a, *b = *head;

	if (b == NULL)
		return (-1);

	while (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}

	for (num = 0; num < (index - 1); num++)
	{
		if (b->next == NULL)
			return (-1);

		b = b->next;
	}

	a = b->next;
	b->next = a->next;
	free(a);
	return (1);
}
