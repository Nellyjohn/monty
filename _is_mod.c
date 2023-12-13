#include "monty.h"

/**
 * _is_mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack.
 * @h: top of list
i * @line_number: line of command
 * Return: nothing
 */
void _is_mod(stack_t **h, unsigned int line_number)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		printf("L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*h)->n == 0 || (*h)->next->n == 0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*h)->next->n %= (*h)->n;
	(*h) = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
}
