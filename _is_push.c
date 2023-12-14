#include "monty.h"

/**
 * _is_number - check each character of string for digit
 * @n: integer
 * Return: 0 for numbr and -1 for not number
 */

int _is_number(const char *n)
{
	int i = 0;

	if (*n == '-')
		i = 1;
	for (; *(n + i) != '\0'; i++)
	{
		if (isdigit(*(n + i)) == 0)
			return (-1);
	}
	return (0);
}

/**
 * _is_push - add node to the start of a dlinked list
 * @h: head of linked list
 * @line_number: bytecode line number
 * @n: integer
 */

void _is_push(stack_t **h, unsigned int line_number, const char *n)
{
	int num;

	if (!h)
		return;
	if (_is_number(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		_is_free_dlist(h);
		exit(EXIT_FAILURE);
	}

	num = atoi(n);
	if (num == 0 && n[0] != '0')
	{
		printf("L%u: usage: push integer\n", line_number);
		_is_free_dlist(h);
		exit(EXIT_FAILURE);
	}
	if (_is_add_end_node(h, num) == -1)
	{
		_is_free_dlist(h);
		exit(EXIT_FAILURE);
	}
}
