#include "monty.h"

/**
 * _is_add - adds the top two elements in stack
 * @h: top node
 * @line_number: node number
 */

void _is_add(stack_t **h, unsigned int line_number)
{
	if (!*h || !(*h)->next)
	{
		printf("L%u: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	(*h)->next->n += (*h)->n;
	(*h) = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
}
