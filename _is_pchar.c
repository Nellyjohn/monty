#include "monty.h"

/**
 * _is_pchar - print top node in stack as ASCII latter
 * @h: head of list
 * @line_number: bytecode line number
 */

void _is_pchar(stack_t **h, unsigned int line_number)
{
	if (!h || !*h)
	{
		printf("L%u: can't pchar, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*h)->n) >= 0 && ((*h)->n) <= 127)
		printf("%c\n", (*h)->n);
	else
	{
		printf("L%u: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}
}
