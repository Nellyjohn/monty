#include "monty.h"

/**
 * _is_add_queue_end_node - add new node
 * @h: node
 * @n: number
 * Return: 0 on success or -1 on failure
 */

int _is_add_queue_end_node(stack_t **h, int n)
{
	stack_t *new_node, *tmp;

	if (!h)
		return (-1);

	tmp = *h;
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		printf("Error: malloc failed\n");
		return (-1);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (0);
}
