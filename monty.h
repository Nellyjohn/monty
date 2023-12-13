#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* opcode related prototype */
void (*is_get_op_func(char *token1))(stack_t **stack, unsigned int line_number);
void _is_push(stack_t **h, unsigned int line_number, const char *n);
void _is_pall(stack_t **h, unsigned int line_number);
void _is_add(stack_t **h, unsigned int line_number);

/* double linked list prototype */
int _is_add_end_node(stack_t **h, int n);
void _is_delete_end_node(stack_t **h);
void _is_free_dlist(stack_t **h);
void _is_pint(stack_t **h, unsigned int line_number);
void _is_pop(stack_t **h, unsigned int line_number);
void _is_swap(stack_t **h, unsigned int line_number);
void _is_nop(stack_t **h, unsigned int line_number);

#endif
