#include "monty.h"

/**
  *  _is_pall - prints all the values on the stack,
  * starting from the top of the stack
  * @h: head of the list
  * @line_number: bytecode line number
  * Return: nothing
  */
void _is_pall(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (!h || !*h)
		return;

	(void) line_number;
	tmp = *h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
