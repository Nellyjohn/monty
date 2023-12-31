#include "monty.h"

/**
 * is_get_op_func - function to select correct operation function
 * @token1: 1st bytecode input (opcode)
 * Return: pointer to correct operation function
 */

void (*is_get_op_func(char *token1))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"pall", _is_pall},
		{"pint", _is_pint},
		{"pop", _is_pop},
		{"swap", _is_swap},
		{"nop", _is_nop},
		{"add", _is_add},
		{"sub", _is_sub},
		{"div", _is_div},
		{"mul", _is_mul},
		{"mod", _is_mod},
		{"pchar", _is_pchar},
		{"pstr", _is_pstr},
		{"rotl", _is_rotl},
		{"rotr", _is_rotr},
		{"queue", _is_queue},
		{"stack", _is_stack},
		{NULL, NULL}
	};

	int i = 0;

	while (instruction_s[i].f != NULL)
	{
		if (strcmp(token1, instruction_s[i].opcode) == 0)
			return (instruction_s[i].f);
		i++;
	}
	return (NULL);
}
