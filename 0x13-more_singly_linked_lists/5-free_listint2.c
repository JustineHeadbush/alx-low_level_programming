#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	head = NULL;
}
