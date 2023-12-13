#include "monty.h"

void _is_pall(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;

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
