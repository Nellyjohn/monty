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

	if (!h)
		return (-1);

	new_node = malloc(sizeof(struct stack_s));
	if (!new_node)
	{
		printf("Error: malloc failed");
		return (-1);
	}

	new_node->n = n;

	if (!*h)
	{
		*h = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
	}
	return (0);
}
