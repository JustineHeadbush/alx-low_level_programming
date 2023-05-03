#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: the head node’s data.
 * if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *list;

	if (*head == NULL)
		return (0);

	list = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(list);

	return (data);
}
