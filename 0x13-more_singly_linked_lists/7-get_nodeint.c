#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: the index of the node
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (num < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		num++;
	}
	return (head);
}
