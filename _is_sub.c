#include "monty.h"

/**
 * _is_sub - subtract second node from top
 * @h: top of list
 * @line_number: line of command
 */

void _is_sub(stack_t **h, unsigned int line_number)
{
	if (!*h || !(*h)->next)
	{
		printf("L%u: can't sub, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	(*h)->next->n -= (*h)->n;
	(*h) = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
}
