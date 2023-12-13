#include "monty.h"

/**
  * _is_mul - multiplies the second top element of the
  * stack with the top element of the stack.
  * @h: head of the list
  * @line_number: bytecode line number
  * Return: nothing
  */
void _is_mul(stack_t **h, unsigned int line_number)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*h)->next->n *= (*h)->n;
	(*h) = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
}
