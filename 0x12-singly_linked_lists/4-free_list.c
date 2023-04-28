#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free(head);
	free_list(head->next);
	free(head->str);
}
