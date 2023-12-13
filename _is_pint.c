#include "monty.h"

/**
 * _is_pint - print top node in stack
 * @h: head of list
 * @line_number: bytecode line number
 */

void _is_pint(stack_t **h, unsigned int line_number)
{
	if (!h || !*h)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
