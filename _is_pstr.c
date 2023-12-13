#include "monty.h"

/**
 * _is_pstr - print top nodes in stack as ASCII letter
 * @h: head of list
 * @line_number: bytecode line number
 */

void _is_pstr(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (!h || !*h)
	{
		printf("L%u: can't pstr, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	while ((tmp != NULL) && (tmp->n != 0) && (tmp->n >= 0) && (tmp->n <= 127))
	{
		printf("%c", (tmp)->n);
		tmp = tmp->next;
	}
	printf("\n");
}
