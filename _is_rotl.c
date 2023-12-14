#include "monty.h"

/**
 * _is_rotl - rotate so top of stock bcomes last and second become first
 * @h: node to b rotated
 * @line_number: none number
 */

void _is_rotl(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;

	if ((*h)->next != NULL)
	{
		tmp = *h;
		while (tmp->next != NULL)
			tmp = tmp->next;
		(*h)->prev = tmp;
		tmp->next = *h;
		(*h)->next->prev = NULL;
		*h = (*h)->next;
		tmp->next->next = NULL;
	}
}
