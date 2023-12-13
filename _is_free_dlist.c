#include "monty.h"

/**
 * _is_free_dlist - frees a double linked list with int data
 * @h: pointer to head of list
 */

void _is_free_dlist(stack_t **h)
{
	if (!h)
		return;

	while (*h != NULL && (*h)->next != NULL)
	{
		*h = (*h)->next;
		free((*h)->prev);
	}
	free(*h);
}
