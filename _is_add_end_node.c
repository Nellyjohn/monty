#include "monty.h"

/**
 * _is_add_end_node - add node to front of a double linked list
 * @h: pointer to head of list
 * @n: node data
 * Return: 0 for success or -1 for failure
 */

int _is_add_end_node(stack_t **h, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(struct stack_s));
	if (!new_node)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;

	if (*h)
		(*h)->prev = new_node;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;

	return (0);
}
