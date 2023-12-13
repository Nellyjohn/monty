#include "monty.h"

/**
  * _is_swap - swaps the top two elements of the stack.
  * @h: head of the list
  * @line_number: bytecode line number
  * Return: nothing
  */
void _is_swap(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (h == NULL || (*h)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*h)->next;

	if (tmp->next != NULL)
	{
		(*h)->next = tmp->next;
		(*h)->next->prev = *h;
	}
	else
	{
		tmp->prev->prev = tmp;
		tmp->prev->next = NULL;
	}
	tmp->prev = NULL;
	tmp->next = *h;
	*h = tmp;
}
