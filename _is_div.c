#include "monty.h"

/**
  * _is_div - divides the second top element of the
  * stack by the top element of the stack.
  * @h: head of the list
  * @line_number: bytecode line number
  * Return: nothing
  */

void _is_div(stack_t **h, unsigned int line_number)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		printf("L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*h)->n == 0 || (*h)->next->n == 0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*h)->next->n /= (*h)->n;
	(*h) = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
}
