#include "monty.h"

/**
 * _is_rotr - rotate so bottom node of stack becomes first one
 * @h: node to be rotated
 * @line_number: node number
 */

void _is_rotr(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;

	if ((*h)->next != NULL)
	{
		tmp = *h;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		(*h)->prev = tmp;
		tmp->next = *h;
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		(*h) = (*h)->prev;
	}
}
