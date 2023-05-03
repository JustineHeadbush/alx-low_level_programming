#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer
 * Return: the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
