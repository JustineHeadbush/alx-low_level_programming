#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num1, *num2;

	num1 = malloc(sizeof(listint_t));
	if (num1 == NULL)
		return (NULL);

	num1->n = n;
	num1->next = NULL;

	if (*head == NULL)
		*head = num1;

	else
	{
		num2 = *head;
		while (num2->next != NULL)
			num2 = num2->next;
		num2->next = num1;
	}
	return (*head);
}
