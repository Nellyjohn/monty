#include "monty.h"

/**
  * _is_pop - remove the top element of the stack.
  * @h: head of list
  * @line_number: bytecode line number
  * Return: nothing
  */

void _is_pop(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	_is_delete_end_node(h);
}
