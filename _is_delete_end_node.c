#include "monty.h"

/**
 * _is_delete_end_node - deletes node at the end of double linked list
 * @h: pointer to head of double linked list
 */

void _is_delete_end_node(stack_t **h)
{
	stack_t *del = NULL;

	del = *h;
	if ((*h)->next == NULL)
	{
		*h = NULL;
		free(del);
	}
	else
	{
		*h = (*h)->next;
		(*h)->prev = NULL;
		free(del);
	}
}

